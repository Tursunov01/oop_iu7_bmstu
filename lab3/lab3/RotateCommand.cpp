#include "RotateCommand.h"

RotateCommand::RotateCommand(std::shared_ptr<SceneObjectComposite> &model) : AbstractCmd(model) {}

void RotateCommand::execute(DataManager &dm, Argument arg) {
    _composite->rotate(arg.motion.data.rotate_act.alpha, arg.motion.data.rotate_act.beta, arg.motion.data.rotate_act.gamma);
}
