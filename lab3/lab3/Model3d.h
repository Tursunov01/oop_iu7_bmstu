#ifndef MODEL3D_H
#define MODEL3D_H

#include "Point.h"
#include "Edge.h"
#include <vector>
#include "ProgrammFactory.h"
#include "ModelInterface.h"

class Model3d: public ModelInterface{
public:
    Model3d();
        ~Model3d();
//        Model3d* clone() const override;

        void rotate(double alpha, double beta, double gamma) override;
        void rotate(const Point& center, double alpha, double beta, double gamma) override;
        void scale(double k) override;
        void scale(const Point& center, double k) override;
//        void transfer(double dx, double dy, double dz) override;
        void move(double dx, double dy, double dz) override;
        void clean();

        std::vector<Point *> &getPoints() override;
        std::vector<Edge *> &getEdges() override;

        void setPoints(const std::vector<Point *> &points);

        void setEdges(const std::vector<Edge *> &edges);

        void updateCenter();

        void setLoaded(bool loaded);
private:
    //ProgramFactory *factory { nullptr };
    std::vector<Point*> points;
    std::vector<Edge*> edges;
    Point *_position { nullptr };
    bool _loaded { false }; //?
};

#endif // MODEL3D_H

