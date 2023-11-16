#include "weird-class.h"
//
// Created by André Ribeiro on 16/11/2023.
//
Point Point::operator+(const Point rhs) const
{
    // Create a new point that is the sum of this one and rhs.
    return Point(x + rhs.x, y + rhs.y);
}

