#ifndef MATHVECTOR_H
#define MATHVECTOR_H

#include <initializer_list>
#include <vector>
#include <memory>
using namespace std;

#include "Container.h"
#include "Iterator.h"

namespace mathvector {
    template <typename T> class MathVector: public Container{

public:
        MathVector();
        explicit MathVector(size_t initial_size);
        explicit MathVector(const vector<T> &data);
        MathVector(T *data, size_t size);
        MathVector(initializer_list<T> data);
        explicit MathVector(const MathVector<T> &vec);
        MathVector(MathVector<T>&& vec);
        virtual ~MathVector();

        MathVector<T> &operator=(const MathVector<T> &vec);
        MathVector<T> &operator=(MathVector<T> &&vec);
        MathVector<T> &operator=(initializer_list<T> values);

        T &operator[](size_t i);
        const T &operator[](size_t i) const;

        T length() const;
        MathVector<T> norm() const;
        MathVector<T>& normalize();

        MathVector<T> operator&(const MathVector<T> &vec) const;
        MathVector<T> multiplication(const MathVector<T> &vec) const;
        T operator*(const MathVector<T> &vec) const;
        T angle(const MathVector<T> &vec) const;
        bool ortogonality(const MathVector<T> &vec) const;
        bool collinearity(const MathVector<T> &vec) const;

        MathVector<T>& addTo(const MathVector<T> &vec);
        MathVector<T> &operator+=(const MathVector<T> &vec);
        MathVector<T> add(const MathVector<T> &vec) const;
        MathVector<T> operator+(const MathVector<T> &vec) const;
        MathVector<T> operator+() const;

        MathVector<T>& subFrom(const MathVector<T> &vec);
        MathVector<T> &operator-=(const MathVector<T> &vec);
        MathVector<T> sub(const MathVector<T> &vec) const;
        MathVector<T> operator-(const MathVector<T> &vec) const;
        MathVector<T> operator-() const;

        MathVector<T> multiplyTo(T var);
        MathVector<T> &operator*=(T var);
        MathVector<T> multiply(T *var);
        MathVector<T> operator*(T var) const;

        MathVector<T> devideFrom(T var);
        MathVector<T> &operator/=(T var);
        MathVector<T> devide(T *var);
        MathVector<T> operator/(T var) const;

        bool equals(const MathVector<T> &vec) const;
        bool operator==(const MathVector<T> &vec) const;

        bool notEquals(const MathVector<T> &vec) const;
        bool operator!=(const MathVector<T> &vec) const;

        IteratorConst<T> begin() const;
        IteratorConst<T> end() const;

        Iterator<T> begin();
        Iterator<T> end();

        IteratorConst<T> cbegin() const;
        IteratorConst<T> cend() const;

   private:
        shared_ptr<T> coords;
    };
}

#include "MathVector.hpp"


#endif // MATHVECTOR_H
