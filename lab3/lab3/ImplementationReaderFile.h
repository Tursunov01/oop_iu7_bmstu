#ifndef IMPLEMENTATIONREADERFILE_H
#define IMPLEMENTATIONREADERFILE_H


#include "Edge.h"
#include "Point.h"
#include <cstdio>
#include "ProgrammFactory.h"
#include "ImplementationReader.h"

class ImplementationReaderFile: public ImplementationReader{
public:
    explicit ImplementationReaderFile(const char *path);
    virtual ~ImplementationReaderFile();

    bool getN(unsigned &nPoints, unsigned &nEdges) override;
    bool getNextEdge(Edge *&edge) override;
    bool getNextPoint(Point *&point) override;

private:
    FILE *f { nullptr };
    ProgramFactory *factory { nullptr };
};


#endif // IMPLEMENTATIONREADERFILE_H
