#include "SceneObject.h"
#include "ProgrammFactory.h"
#include "ScaleCommand.h"
#include "RotateCommand.h"
#include "MoveCommand.h"


ProgramFactory* ProgramFactory::instance = nullptr;

ProgramFactory* ProgramFactory::getInstance() {
    if (!instance) {
        instance = new ProgramFactory();
        return instance;
    }

    return instance;
}

ProgramFactory::ProgramFactory() {}

ScaleCommand* ProgramFactory::createScaleCommand() {
    return new ScaleCommand();
}

ScaleCommand* ProgramFactory::createScaleCommand(std::shared_ptr<SceneObjectComposite> composite) {
    return new ScaleCommand(composite);
}

RotateCommand* ProgramFactory::createRotateCommand() {
    return new RotateCommand();
}

RotateCommand* ProgramFactory::createRotateCommand(std::shared_ptr<SceneObjectComposite> composite) {
    return new RotateCommand(composite);
}

MoveCommand* ProgramFactory::createMoveCommand() {
    return new MoveCommand();
}

MoveCommand* ProgramFactory::createMoveCommand(std::shared_ptr<SceneObjectComposite> composite) {
    return new MoveCommand(composite);
}

LoadCommand* ProgramFactory::createLoadCommand() {
    return new LoadCommand();
}

DrawCommand* ProgramFactory::createDrawCommand() {
    return new DrawCommand();
}

SceneObjectComposite* ProgramFactory::createSceneObjectComposite() {
    return new SceneObjectComposite();
}

Point* ProgramFactory::createPoint(double x, double y, double z) {
    return new Point(x, y, z);
}

Point* ProgramFactory::createPoint(const Point *point){
    return new Point(point->getX(), point->getY(), point->getZ());
}

Edge* ProgramFactory::createEdge(unsigned startPointId, unsigned endPointId) {
    return new Edge(startPointId, endPointId);
}

Camera* ProgramFactory::createCamera() {
    return new Camera();
}

Camera* ProgramFactory::createCamera(std::shared_ptr<Point> viewPoint, double alpha, double beta, double gamma) {
    return new Camera(std::move(viewPoint), alpha, beta, gamma);
}

Camera* ProgramFactory::createCamera(double xViewPoint, double yViewPoint, double zViewPoint,
                                     double alpha, double beta, double gamma) {
    return new Camera(xViewPoint, yViewPoint, zViewPoint, alpha, beta, gamma);
}

Drawer* ProgramFactory::createDrawer() {
    return new Drawer();
}

