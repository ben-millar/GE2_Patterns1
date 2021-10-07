#pragma once
#include "Brick.h"

class ClayBrick : public Brick
{
public:
    ClayBrick() = default;
    ~ClayBrick() = default;

    void Draw() override { std::cout << "I'm a clay brick." << std::endl; }
};