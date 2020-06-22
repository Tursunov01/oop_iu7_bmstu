#include "LoadCommand.h"
#include "ModelBuilder.h"


LoadCommand::LoadCommand(std::shared_ptr<SceneObjectComposite> &model) : AbstractCmd(model) {}

void LoadCommand::execute(DataManager &dm, Argument arg) {
    //Director *director = new Director(new ModelBuilder(arg.load_act.file));
    ModelBuilder *builder = new ModelBuilder(arg.load_act.file);
    std::shared_ptr<Model3d> model3d = builder->getResult();

    auto newComposite = std::shared_ptr<SceneObjectComposite>(ProgramFactory::getInstance()->createSceneObjectComposite());
    newComposite->add(model3d);

    dm.addComposite(arg.load_act.id, newComposite);
    dm.addModel(arg.load_act.id, model3d);
}
