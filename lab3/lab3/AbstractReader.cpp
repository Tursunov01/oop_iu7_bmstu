#include "AbstractReader.h"

AbstractReader::AbstractReader(ImplementationReader &implementator)
: _implementator(implementator) {
}

AbstractReader::~AbstractReader() {

}

bool AbstractReader::getN(unsigned &nPoints, unsigned &nEdges) {
    return _implementator.getN(nPoints, nEdges);
}

bool AbstractReader::getNextEdge(Edge *&edge) {
    return _implementator.getNextEdge(edge);
}

bool AbstractReader::getNextPoint(Point *&point) {
    return _implementator.getNextPoint(point);
}
