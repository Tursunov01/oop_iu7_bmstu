#ifndef IMPLEMENTATIONREADER_H
#define IMPLEMENTATIONREADER_H

#include "Edge.h"
#include "Point.h"


class ImplementationReader{
public:
    virtual bool getN(unsigned &nPoints, unsigned &nEdges) = 0;
    virtual bool getNextEdge(Edge *&edge) = 0;
    virtual bool getNextPoint(Point *&point) = 0;
};


#endif // IMPLEMENTATIONREADER_H
