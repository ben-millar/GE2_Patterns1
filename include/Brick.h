#pragma once
#include <iostream>

class Brick
{
public:
    Brick() = default;
    ~Brick() = default;

    virtual void Draw() = 0;
};