#include "AbstractCommand.h"


AbstractCmd::AbstractCmd(std::shared_ptr<SceneObjectComposite> &composite) : _composite(composite) {}

void AbstractCmd::setComposite(std::shared_ptr<SceneObjectComposite> &composite){
    _composite = composite;
}
