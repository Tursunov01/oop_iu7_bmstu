#ifndef MODELINTERFACE_H
#define MODELINTERFACE_H
#include <vector>
#include "Edge.h"
#include "Point.h"
#include "SceneObject.h"

class ModelInterface: public SceneObject{
public:
    ModelInterface() : SceneObject() {};
    virtual ~ModelInterface() {};
//    virtual ModelInterface* clone() const = 0;

    virtual std::vector<Point *> &getPoints() = 0;
    virtual std::vector<Edge *> &getEdges() = 0;
};

#endif // MODELINTERFACE_H
