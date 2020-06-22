#include "ScaleCommand.h"
#include "AbstractCommand.h"

ScaleCommand::ScaleCommand(std::shared_ptr<SceneObjectComposite> &model) : AbstractCmd(model) {}

void ScaleCommand:: execute(DataManager &dm, Argument arg){
     _composite->scale(arg.motion.data.scale_act.k);
}
