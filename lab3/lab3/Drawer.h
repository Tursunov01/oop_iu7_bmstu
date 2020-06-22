#ifndef DRAWER_H
#define DRAWER_H

#include <QGraphicsScene>
#include "ModelInterface.h"
#include "mainwindow.h"

class Drawer final{
private:

    void drawLine(QGraphicsScene *scene, const Point &p1, const Point &p2);
    void drawEdge(QGraphicsScene *scene, Model3d &model, const Edge *edge, Camera& camera);

    public:
        Drawer() {};
        ~Drawer() {};
        void drawObject(QGraphicsScene *scene, std::shared_ptr<Model3d>& model, std::shared_ptr<Camera>& camera);
};

#endif // DRAW_H
