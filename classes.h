//
// Created by André Ribeiro on 16/11/2023.
//

#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>
#include <string>

class Dog
{
    // Member variables and functions are private by default.
    std::string name;
    int weight;

    // All members following this are public
    // until "private:" or "protected:" is found.
public:
    // Constructor
    Dog();

    void setName(const std::string& name);

    void setWeight(int weight);

    // Functions that do not modify the state of the object
    // should be marked as const.
    // This allows you to call them if given a const reference to the object.
    // Also note the functions must be explicitly declared as _virtual_
    // in order to be overridden in derived classes.
    // Functions are not virtual by default for performance reasons.
    virtual void print() const;

    void bark() const { std::cout << name << " barks!\n"; }

    virtual ~Dog();
};

void usage();

#endif //CLASSES_H
