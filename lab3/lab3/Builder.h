#ifndef BUILDER_H
#define BUILDER_H

#include "ModelInterface.h"
#include "Model3d.h"
#include "AbstractReader.h"

class Builder{
protected:
    std::shared_ptr<Model3d> product;
public:
    virtual void Reset() = 0;
    virtual void setPoints(unsigned nPoints, AbstractReader reader) = 0;
    virtual void setEdges(unsigned nEdges, AbstractReader reader) = 0;
    virtual std::shared_ptr<Model3d> getResult() = 0;

};

#endif // BUILDER_H
