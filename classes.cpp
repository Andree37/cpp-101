//
// Created by André Ribeiro on 16/11/2023.
//

#include "classes.h"

#include <iostream>
#include <string>

Dog::Dog()
{
    std::cout << "A dog has been constructed\n";
}

void Dog::setName(const std::string& name)
{
    this->name = name;
}

void Dog::setWeight(const int weight)
{
    this->weight = weight;
}

void Dog::print() const
{
    std::cout << "Dog is " << name << " and weighs " << weight << "kg\n";
}

Dog::~Dog()
{
    std::cout << "Goodbye " << name << '\n';
}

void usage()
{
    Dog myDog; // prints "A dog has been constructed"
    myDog.setName("Barkley");
    myDog.setWeight(10);
    myDog.print(); // prints "Dog is Barkley and weighs 10 kg"
} // prints Goodbye Barkley





