#pragma once
#include "Brick.h"

class LegoBrick : public Brick
{
public:
    LegoBrick() = default;
    ~LegoBrick() = default;

    std::string getData() override { return "I'm a lego brick."; }
};