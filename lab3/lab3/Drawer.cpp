#include "Drawer.h"
#include "Error.h"

void Drawer::drawObject(QGraphicsScene *scene, std::shared_ptr<Model3d> &model, std::shared_ptr<Camera> &camera) {
    if (!scene) {
        throw NullPtrException(__FILE__, __LINE__, __FUNCTION__);
    }

    scene->clear();
    auto edges = model->getEdges();
    for (auto edge : edges) {
        drawEdge(scene, *model.get(), edge, *camera.get());
    }
}

void Drawer::drawLine(QGraphicsScene *scene, const Point &p1, const Point &p2){
    scene->addLine(p1.getX(), p1.getY(), p2.getX(), p2.getY());
}

void Drawer::drawEdge(QGraphicsScene *scene, Model3d &model, const Edge *edge, Camera& camera) {
    unsigned i = edge->getStartPointId();
    unsigned j = edge->getEndtPointId();

    auto p1_tmp = model.getPoints()[i - 1];
    auto p2_tmp = model.getPoints()[j - 1];

    Point p1(p1_tmp->getX(), p1_tmp->getY(), p1_tmp->getZ());
    Point p2(p2_tmp->getX(), p2_tmp->getY(), p2_tmp->getZ());

    auto alpha = camera.getAlpha();
    auto beta = camera.getBeta();
    auto gamma = camera.getGamma();
    auto viewPoint = camera.getViewPoint();

    p1.rotate(*viewPoint, alpha, beta, gamma);
    p2.rotate(*viewPoint, alpha, beta, gamma);
    p1.move(viewPoint->getX(), viewPoint->getY(), viewPoint->getZ());
    p2.move(viewPoint->getX(), viewPoint->getY(), viewPoint->getZ());

    drawLine(scene, p1, p2);
}
