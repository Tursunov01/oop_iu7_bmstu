#ifndef CAMERA_H
#define CAMERA_H

#include "SceneObject.h"


class Camera final : public SceneObject {
public:
    Camera();
    Camera(double xVewPoint, double yViewPoint, double zViewPoint, double alpha, double beta, double gamma);
    Camera(std::shared_ptr<Point> viewPoint, double alpha, double beta, double gamma);
    ~Camera() override;

    std::shared_ptr<Point>& getViewPoint();
    void setViewPoint(std::shared_ptr<Point> viewPoint);
    void setViewPoint(double x, double y, double z);

    double getAlpha();
    void setAlpha(double alpha);

    void setBeta(double beta);
    double getBeta();

    void setGamma(double gamma);
    double getGamma();

    void rotate(const Point& center, double alpha, double beta, double gamma) override;
    void rotate(double alpha, double beta, double gamma) override;

    void move(double dx, double dy, double dz) override;

    void scale(const Point& center, double k) override;
    void scale(double k) override;

private:
    std::shared_ptr<Point> _viewPoint { nullptr };
    double _alpha { 0 };
    double _beta { 0 };
    double _gamma { 0 };

};


#endif // CAMERA_H
