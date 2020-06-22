#ifndef DRAWCOMMAND_H
#define DRAWCOMMAND_H

#include"AbstractCommand.h"

class DrawCommand: public AbstractCmd {
public:
    DrawCommand() {};
    explicit DrawCommand(std::shared_ptr<SceneObjectComposite> &model);
    void execute(DataManager &dm, Argument arg);
};

#endif // DRAWCOMMAND_H
