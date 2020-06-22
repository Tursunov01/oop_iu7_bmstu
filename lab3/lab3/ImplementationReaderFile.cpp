#include "ImplementationReaderFile.h"
#include "Error.h"

ImplementationReaderFile::ImplementationReaderFile(const char *path)
: factory(ProgramFactory::getInstance()){
    if (path == nullptr || path == "" || !(f = fopen(path, "r")))
        throw FileOpeningError(__FILE__, __LINE__, __FUNCTION__);
}

ImplementationReaderFile::~ImplementationReaderFile() {
    if (f)
        fclose(f);
}

bool ImplementationReaderFile::getN(unsigned &nPoints, unsigned &nEdges) {
    int buff1;
    int buff2;

    int rc = fscanf(f, "%i %i\n", &buff1, &buff2);
    if (rc == 2 && buff1 > 0 && buff2 > 0) {
        nPoints = (unsigned)buff1;
        nEdges =  (unsigned)buff2;
        return true;
    }

    return false;
}

bool ImplementationReaderFile::getNextEdge(Edge *&edge) {
    int buff1;
    int buff2;

    int rc = fscanf(f, "%i-%i\n", &buff1, &buff2);
    if (rc == 2 && buff1 > -1 && buff2 > -1) {
        edge = factory->createEdge((unsigned)buff1, (unsigned)buff2);
        return true;
    }

    return false;
}

bool ImplementationReaderFile::getNextPoint(Point *&point) {
    double x = 0;
    double y = 0;
    double z = 0;

    int rc = fscanf(f, "[%lf;%lf;%lf]\n", &x, &y, &z);
    if (rc == 3) {
        point = factory->createPoint(x, y, z);
        return true;
    }

    return false;
}
