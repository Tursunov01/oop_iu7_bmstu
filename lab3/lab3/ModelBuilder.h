#ifndef MODELBUILDER_H
#define MODELBUILDER_H

#include "ImplementationReaderFile.h"
#include "AbstractReader.h"
#include "Error.h"
#include "AbstractCommand.h"
#include "Builder.h"

class ModelBuilder: public Builder{
private:
    const char *source;
public:
    ModelBuilder(const char *source);
    void Reset() override;
//    void setPoints(unsigned int nPoints, int reader) override;
//    void setEdges(unsigned int nEdges, int reader) override;
    void setPoints(unsigned int nPoints, AbstractReader reader) override;
    void setEdges(unsigned int nEdges, AbstractReader reader) override;
//    std::shared_ptr<Model3d> createProduct();
    std::shared_ptr<Model3d> getResult() override;
};


#endif // MODELBUILDER_H
