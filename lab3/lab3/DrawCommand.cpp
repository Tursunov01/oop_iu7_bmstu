#include "DrawCommand.h"


DrawCommand::DrawCommand(std::shared_ptr<SceneObjectComposite> &model) : AbstractCmd(model) {}

void DrawCommand::execute(DataManager &dm, Argument arg) {
    Drawer *drawer = ProgramFactory::getInstance()->createDrawer();
    auto models = dm.getModels();
    //если на сцене несколько объектов
    for (auto model : models) {
            drawer->drawObject(arg.draw_act, models.second, dm.getActiveCamera());
    }
}
