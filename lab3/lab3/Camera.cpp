#include "Camera.h"
#include "ProgrammFactory.h"

Camera::Camera()
: _alpha(0),
  _beta(0),
  _gamma(0) {
    _viewPoint.reset(ProgramFactory::getInstance()->createPoint(0, 0, 0));
}

Camera::Camera(double xViewPoint, double yViewPoint, double zViewPoint, double alpha, double beta, double gamma)
: _alpha(alpha),
  _beta(beta),
  _gamma(gamma) {
    _viewPoint.reset(ProgramFactory::getInstance()->createPoint(xViewPoint, yViewPoint, zViewPoint));
}

Camera::Camera(std::shared_ptr<Point> viewPoint, double alpha, double beta, double gamma)
: _viewPoint(std::move(viewPoint)),
  _alpha(alpha),
  _beta(beta),
  _gamma(gamma) {

}

Camera::~Camera() {
}

std::shared_ptr<Point>& Camera::getViewPoint() {
    return _viewPoint;
}

void Camera::setViewPoint(std::shared_ptr<Point> viewPoint) {
    _viewPoint = std::move(viewPoint);
}

void Camera::setViewPoint(double x, double y, double z) {
    _viewPoint.reset(ProgramFactory::getInstance()->createPoint(x, y, z));
}

double Camera::getAlpha() {
    return _alpha;
}

void Camera::setAlpha(double alpha) {
    _alpha = alpha;
}

void Camera::setBeta(double beta) {
    _beta = beta;
}

double Camera::getBeta() {
    return _beta;
}

void Camera::setGamma(double gamma) {
    _gamma = gamma;
}

double Camera::getGamma() {
    return _gamma;
}

void Camera::rotate(const Point& center, double alpha, double beta, double gamma) {
    _viewPoint->rotate(center, alpha, beta, gamma);
}

void Camera::rotate(double alpha, double beta, double gamma) {
    // TODO _viewPoint->rotate(, alpha, beta, gamma);
}

void Camera::move(double dx, double dy, double dz) {
    _viewPoint->move(dx, dy, dz);
}

void Camera::scale(const Point& center, double k) {
    // Maybe this is bad idea))
    _viewPoint->scale(center, k);
}

void Camera::scale(double k) {
    // Same as above((
    // TODO

}
