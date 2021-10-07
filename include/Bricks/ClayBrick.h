#ifndef CLAY_BRICK_H
#define CLAY_BRICK_H

#include "Brick.h"

class ClayBrick : public Brick
{
public:
    ClayBrick() = default;
    ~ClayBrick() = default;

    std::string getData() override { return "I'm a clay brick."; }
};

#endif