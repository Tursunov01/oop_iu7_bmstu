#ifndef ABSTRACTREADER_H
#define ABSTRACTREADER_H

#include "ImplementationReader.h"

class AbstractReader{
public:
    explicit AbstractReader(ImplementationReader &implementator);
    virtual ~AbstractReader();

    bool getN(unsigned &nPoints, unsigned &nEdges);
    bool getNextEdge(Edge *&edge);
    bool getNextPoint(Point *&point);

private:
    ImplementationReader& _implementator;
};

#endif // ABSTRACTREADER_H
