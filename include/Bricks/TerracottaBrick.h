#ifndef TERRACOTTA_BRICK_H
#define TERRACOTTA_BRICK_H

#include "Brick.h"

class TerracottaBrick : public Brick
{
public:
    TerracottaBrick() = default;
    ~TerracottaBrick() = default;

    std::string getData() override { return "I'm a terracotta brick."; }
};

#endif