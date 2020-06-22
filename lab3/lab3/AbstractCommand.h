#ifndef ABSTRACTCOMMAND_H
#define ABSTRACTCOMMAND_H

#include<QGraphicsScene>
#include<ModelInterface.h>
#include"SceneObjectComposite.h"
#include"DataManager.h"
#include<memory>
#include<vector>


class AbstractCmd {
public:
    union Argument {
            struct scale {
                double k;
            };

            struct rotate {
                double alpha;
                double beta;
                double gamma;
            };

            struct transfer {
                double dx;
                double dy;
                double dz;
            };

            union motion_data {
                rotate rotate_act;
                transfer transfer_act;
                scale scale_act;
            };

            struct motion {
                unsigned id;
                motion_data data;

            };

            struct load {
                unsigned id;
                char *file;
            };

            struct group {
                unsigned new_id;
            };

            load load_act;
            QGraphicsScene *draw_act;

            motion motion;
            group group_act;

            unsigned set_active_camera_act;

        };
    AbstractCmd() {};
    explicit AbstractCmd(std::shared_ptr<SceneObjectComposite> &composite);
    virtual ~AbstractCmd() {};
    virtual void setComposite(std::shared_ptr<SceneObjectComposite> &composite);

    virtual void execute(DataManager &dm, Argument arg) = 0;

protected:
    std::shared_ptr<SceneObjectComposite> _composite { nullptr };
};

#endif // ABSTRACTCOMMAND_H
