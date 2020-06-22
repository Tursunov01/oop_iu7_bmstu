#ifndef LOADCOMMAND_H
#define LOADCOMMAND_H

#include "AbstractCommand.h"

//class LoadCommand : public AbstractCmd{
class LoadCommand{
public:
    LoadCommand() {};
    explicit LoadCommand(std::shared_ptr<SceneObjectComposite> &model);
    void execute(DataManager &dm, Argument arg);
};

#endif // LOADCOMMAND_H
