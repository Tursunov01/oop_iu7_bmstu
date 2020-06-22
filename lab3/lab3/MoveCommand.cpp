#include "MoveCommand.h"
#include "mainwindow.h"


MoveCommand::MoveCommand(std::shared_ptr<SceneObjectComposite> &model) : AbstractCmd(model) {}

void MoveCommand::execute(DataManager &dm, Argument arg) {
    _composite->transfer(arg.motion.data.transfer_act.dx, arg.motion.data.transfer_act.dy, arg.motion.data.transfer_act.dz);
}
