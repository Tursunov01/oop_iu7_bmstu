#ifndef PROGRAMMFACTORY_H
#define PROGRAMMFACTORY_H

#include "Drawer.h"
#include <memory>
#include "Point.h"
#include "command.h"

class ProgramFactory{
private:
    static ProgramFactory *instance;
    ProgramFactory();
public:
    static ProgramFactory* getInstance();

    ScaleCommand* createScaleCommand();
    ScaleCommand* createScaleCommand(std::shared_ptr<SceneObjectComposite> composite);

    RotateCommand* createRotateCommand();
    RotateCommand* createRotateCommand(std::shared_ptr<SceneObjectComposite> composite);

    MoveCommand* createMoveCommand();
    MoveCommand* createMoveCommand(std::shared_ptr<SceneObjectComposite> composite);

    DrawCommand* createDrawCommand();
    DrawCommand* createDrawCommand(std::shared_ptr<SceneObjectComposite> composite);

    LoadCommand* createLoadCommand();
    LoadCommand* createLoadCommand(std::shared_ptr<SceneObjectComposite> composite);

    SceneObjectComposite* createSceneObjectComposite();

    Point* createPoint(double x, double y, double z);
    Point* createPoint(const Point *point);
    Edge* createEdge(unsigned startPointId, unsigned endPointId);

    Camera* createCamera();
    Camera* createCamera(double xVewPoint, double yViewPoint, double zViewPoint, double alpha, double beta, double gamma);
    Camera* createCamera(std::shared_ptr<Point> viewPoint, double alpha, double beta, double gamma);

    Drawer* createDrawer();

};

#endif // PROGRAMMFACTORY_H
