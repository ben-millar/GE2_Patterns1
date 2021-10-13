#ifndef BRICK_PROXY_H
#define BRICK_PROXY_H

class Brick;

class BrickProxy
{
public:
    BrickProxy(Brick* t_brick) : m_brick{t_brick} {};
    ~BrickProxy() = default;

    Brick* operator->() { return m_brick; }
private:
    Brick* m_brick;
};

#include "Brick.h"

#endif