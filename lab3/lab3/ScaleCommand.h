#ifndef SCALECOMMAND_H
#define SCALECOMMAND_H

#include "AbstractCommand.h"

class ScaleCommand: public AbstractCmd
{
public:
    ScaleCommand() {};
    explicit ScaleCommand(std::shared_ptr<SceneObjectComposite> &model);
    void execute(DataManager &dm, Argument arg);
};

#endif // SCALECOMMAND_H
