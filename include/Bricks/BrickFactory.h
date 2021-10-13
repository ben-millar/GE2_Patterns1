#ifndef BRICK_FACTORY_H
#define BRICK_FACTORY_H

#include "BrickProxy.h"
#include "ClayBrick.h"
#include "LegoBrick.h"
#include "TerracottaBrick.h"

enum class BrickType
{
    CLAY,
    LEGO,
    TERRACOTTA
};

class BrickFactory
{
public:
    BrickFactory() = default;
    ~BrickFactory() = default;

    static BrickProxy getBrick(BrickType t_type) {
        switch(t_type)
        {
            case BrickType::CLAY:
                return BrickProxy(new ClayBrick());
                break;
            case BrickType::LEGO:
                return BrickProxy(new LegoBrick());
                break;
            case BrickType::TERRACOTTA:
                return BrickProxy(new TerracottaBrick());
                break;
            default:
                break;
        }

        return nullptr;
    }
};

#endif