#pragma once
#include "Brick.h"

class ClayBrick : public Brick
{
public:
    ClayBrick() = default;
    ~ClayBrick() = default;

    std::string getData() override { return "I'm a clay brick."; }
};