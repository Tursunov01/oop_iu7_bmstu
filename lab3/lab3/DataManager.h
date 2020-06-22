#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include "AbstractCommand.h"
#include "SceneObjectComposite.h"
#include "Camera.h"
#include "Model3d.h"

#include <memory>
#include <map>

class DataManager {
public:
    DataManager() : _activeCameraId(0) {};
    ~DataManager();

    void addComposite(unsigned id, std::shared_ptr<SceneObjectComposite> composite);
    void removeComposite(unsigned id);
    std::shared_ptr<SceneObjectComposite>& getComposite(unsigned id);
    std::map<unsigned, std::shared_ptr<SceneObjectComposite>>& getComposites();

    void addModel(unsigned id, std::shared_ptr<Model3d> model);
    std::shared_ptr<Model3d> getModel(unsigned id);
    std::map<unsigned, std::shared_ptr<Model3d>> getModels();
    void removeModel(unsigned id);
    void addCamera(unsigned id, std::shared_ptr<Camera> camera);
    std::map<unsigned, std::shared_ptr<Camera>>& getCameras();
    void setActiveCamera(unsigned id);
    std::shared_ptr<Camera>& getActiveCamera();

private:
    unsigned _activeCameraId { 0 };
    std::map<unsigned, std::shared_ptr<SceneObjectComposite>> _composites;
    std::map<unsigned, std::shared_ptr<Model3d>> _models;
    std::map<unsigned, std::shared_ptr<Camera>> _cameras;
};

#endif // DATAMANAGER_H
