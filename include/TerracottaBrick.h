#pragma once
#include "Brick.h"

class TerracottaBrick : public Brick
{
public:
    TerracottaBrick() = default;
    ~TerracottaBrick() = default;

    void Draw() override { std::cout << "I'm a terracotta brick." << std::endl; }
};