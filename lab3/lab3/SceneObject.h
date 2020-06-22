#ifndef SCENEOBJECT_H
#define SCENEOBJECT_H
#include <memory>
#include "Point.h"

class SceneObject {
public:
    SceneObject();
    explicit SceneObject(const SceneObject &obj);
    virtual ~SceneObject() {};

    virtual void rotate(const Point& center, double alpha, double beta, double gamma) = 0;
    virtual void rotate(double alpha, double beta, double gamma) = 0;

    virtual void move(double dx, double dy, double dz) = 0;

    virtual void scale(const Point& center, double k) = 0;
    virtual void scale(double k) = 0;
};

#endif // SCENEOBJECT_H
