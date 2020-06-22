#include "DataManager.h"

DataManager::~DataManager() {
}

void DataManager::addComposite(unsigned id, std::shared_ptr<SceneObjectComposite> composite) {
    _composites[id] = std::move(composite);
}
void DataManager::removeComposite(unsigned id) {
    _composites.erase(id);
}

std::shared_ptr<SceneObjectComposite>& DataManager::getComposite(unsigned id) {
    return _composites[id];
}

std::map<unsigned, std::shared_ptr<SceneObjectComposite>>& DataManager::getComposites() {
    return _composites;
}

void DataManager::addModel(unsigned id, std::shared_ptr<Model3d> model) {
    _models[id] = std::move(model);
}

std::shared_ptr<Model3d> DataManager::getModel(unsigned id) {
    return _models[id];
}
std::map<unsigned, std::shared_ptr<Model3d>> DataManager::getModels() {
    return _models;
}

void DataManager::removeModel(unsigned id) {
    _models.erase(id);
}

void DataManager::addCamera(unsigned id, std::shared_ptr<Camera> camera) {
    _cameras[id] = std::move(camera);
}
std::map<unsigned, std::shared_ptr<Camera>>& DataManager::getCameras() {
    return _cameras;
}

void DataManager::setActiveCamera(unsigned id) {
    _activeCameraId = id;
}
