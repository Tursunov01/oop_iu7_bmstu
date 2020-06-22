#include <iostream>
#include "ModelBuilder.h"
#include "Error.h"
#include "Model3d.h"
#include "ImplementationReaderFile.h"

ModelBuilder::ModelBuilder(const char *source) {
        this->source = source;
}

void ModelBuilder::Reset() {
    this->product = static_cast<const std::shared_ptr<Model3d>>(new Model3d);
}

void ModelBuilder::setPoints(unsigned nPoints, AbstractReader reader) {

    /* Read points */
    Point *point = nullptr;
    std::vector<Point*> tmp_points;
    for (int i = 0; i < nPoints && reader.getNextPoint(point); i++)
        tmp_points.push_back(point);

    if (tmp_points.size() != nPoints) {
        for (auto p: tmp_points)
            delete p;

        throw InputError(__FILE__, __LINE__, __FUNCTION__);
    }
    product->setPoints(tmp_points);
}

void ModelBuilder::setEdges(unsigned int nEdges, AbstractReader reader) {
    Edge *edge = nullptr;
    std::vector<Edge*> tmp_edges;
    for (int i = 0; reader.getNextEdge(edge) && i < nEdges; i++)
        tmp_edges.push_back(edge);


    if (tmp_edges.size() != nEdges) {
        for (auto e: tmp_edges)
            delete e;

        throw InputError(__FILE__, __LINE__, __FUNCTION__);
    }
    product->setEdges(tmp_edges);
}

std::shared_ptr<Model3d> ModelBuilder::getResult() {
    Reset();
    ImplementationReaderFile implementator { source };
    AbstractReader reader { implementator };
    unsigned nPoints = 0, nEdges = 0;
    if (!reader.getN(nPoints, nEdges)) {
        throw InputError(__FILE__, __LINE__, __FUNCTION__);
    }
    setPoints(nPoints, reader);
    std::cout<< nPoints << std::endl;
    setEdges(nEdges, reader);
    product->updateCenter();
    product->setLoaded(true);

    return product;
}
