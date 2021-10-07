#pragma once
#include <iostream>
#include <string>

class Brick
{
public:
    Brick() = default;
    ~Brick() = default;

    virtual std::string getData() = 0;
};