#pragma once
#include "Brick.h"

class LegoBrick : public Brick
{
public:
    LegoBrick() = default;
    ~LegoBrick() = default;

    void Draw() override { std::cout << "I'm a lego brick." << std::endl; }
};