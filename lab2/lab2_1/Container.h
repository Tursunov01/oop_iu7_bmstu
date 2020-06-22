#ifndef CONTAINER_H
#define CONTAINER_H

#include <cstddef>
using namespace std;

namespace mathvector {

    class Container {
    public:
        bool isEmpty() const;
        size_t getSize() const;
        virtual void resize(size_t newSize);

    protected:
        size_t size;

        virtual void setSize(size_t newSize);
    };
}

#include "Container.hpp"


#endif // CONTAINER_H
