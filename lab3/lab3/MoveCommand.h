#ifndef MOVECOMMAND_H
#define MOVECOMMAND_H

#include "AbstractCommand.h"

class MoveCommand:public AbstractCmd{
public:
    MoveCommand();
    explicit MoveCommand(std::shared_ptr<SceneObjectComposite> &model);
    void execute(DataManager &dm, Argument arg);
};

#endif // MOVECOMMAND_H
