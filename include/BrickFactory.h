#pragma once
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

    static Brick* getBrick(BrickType t_type) {
        switch(t_type)
        {
            case BrickType::CLAY:
                return new ClayBrick();
                break;
            case BrickType::LEGO:
                return new LegoBrick();
                break;
            case BrickType::TERRACOTTA:
                return new TerracottaBrick();
                break;
            default:
                break;
        }
    }
};