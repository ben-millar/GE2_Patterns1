#ifndef BRICK_H
#define BRICK_H

#include <iostream>
#include <string>

class Brick
{
public:
    Brick() = default;
    ~Brick() = default;

    virtual std::string getData() = 0;
};

#endif