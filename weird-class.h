//
// Created by André Ribeiro on 16/11/2023.
//

#ifndef WEIRD_CLASS_H
#define WEIRD_CLASS_H

#include <iostream>
using namespace std;

class Point
{
public:
    // Member variables can be given default values in this manner.
    double x = 0;
    double y = 0;

    // Define a default constructor which does nothing
    // but initialize the Point to the default value (0, 0)
    Point()
    {
    };

    // The following syntax is known as an initialization list
    // and is the proper way to initialize class member values
    Point(double a, double b) :
        x(a),
        y(b)
    {
        /* Do nothing except initialize the values */
    }

    // Overload the + operator.
    Point operator+(const Point rhs) const;

    // Overload the += operator
    Point& operator+=(const Point& rhs);

    // It would also make sense to add the - and -= operators,
    // but we will skip those for brevity.
};

#endif //WEIRD_CLASS_H
