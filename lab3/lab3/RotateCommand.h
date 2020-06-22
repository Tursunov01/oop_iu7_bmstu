#ifndef ROTATECOMMAND_H
#define ROTATECOMMAND_H

#include "AbstractCommand.h"

class RotateCommand:public AbstractCmd{
public:
    RotateCommand();
    explicit RotateCommand(std::shared_ptr<SceneObjectComposite> &model);
    void execute(DataManager &dm, Argument arg) override;
};

#endif // ROTATECOMMAND_H
