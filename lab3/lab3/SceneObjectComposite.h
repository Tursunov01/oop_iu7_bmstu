#ifndef SCENEOBJECTCOMPOSITE_H
#define SCENEOBJECTCOMPOSITE_H

#include <vector>
#include "SceneObject.h"

class SceneObjectComposite final : SceneObject {
public:
    SceneObjectComposite();
    ~SceneObjectComposite();

    void add(std::shared_ptr<SceneObject> sceneObject);
    void remove(std::shared_ptr<SceneObject> sceneObject);

    void rotate(const Point& center, double alpha, double beta, double gamma) override;
    void rotate(double alpha, double beta, double gamma) override;

    void move(double dx, double dy, double dz) override;

    void scale(const Point& center, double k) override;
    void scale(double k) override;

    std::vector<std::shared_ptr<SceneObject>>::iterator begin();
    std::vector<std::shared_ptr<SceneObject>>::iterator end();
private:
    std::vector<std::shared_ptr<SceneObject>> _objects;
};

#endif // SCENEOBJECTCOMPOSITE_H
