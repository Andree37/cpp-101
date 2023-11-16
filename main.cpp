//
// Created by André Ribeiro on 15/11/2023.
//

#include <iostream>
#include <ostream>

#include "classes.h"
#include "weird-class.h"

enum ECarTypes
{
    Sedan,
    Hatchback,
    SUV,
    Wagon
};

enum ECarTypes2 : uint8_t
{
    // 0
    Sedan2,
    // 1
    Hatchback2,
    // 254
    SUV2 = 254,
    // 255
    Hybrid2
};

int doSomethingDefaultInts(const int a = 2, const int b = 4)
{
    return a + b;
}

std::string doSomethingWithStrings()
{
    return "do something";
}

int main()
{
    sizeof('c') == sizeof(char) == 1;

    int* ip = nullptr;

    std::cout << "Hello World!" << std::endl;
    printf("Another one! %d\n", doSomethingDefaultInts(5));

    // int a;
    // std::cin >> a;

    // strings
    std::string myString = "Hello";
    std::cout << myString + "Potato";

    std::cout << myString.append("Mango");

    std::string foo = "I am foo";
    const std::string bar = "I am bar";


    std::string& fooRef = foo; // This creates a reference to foo.
    fooRef += ". Hi!"; // Modifies foo through the reference
    std::cout << fooRef; // Prints "I am foo. Hi!"

    // Doesn't reassign "fooRef". This is the same as "foo = bar", and
    //   foo == "I am bar"
    // after this line.
    std::cout << &fooRef << std::endl; //Prints the address of foo
    fooRef = bar;
    std::cout << &fooRef << std::endl; //Still prints the address of foo
    std::cout << fooRef; // Prints "I am bar"

    // The address of fooRef remains the same, i.e. it is still referring to foo.

    // references
    std::string ref = doSomethingWithStrings();
    ref += "!";
    std::cout << ref << std::endl;

    usage();

    // weird class
    Point p1(1.0, 2.0);

    Point p = p1 + Point(2.0, 3.0);

    std::cout << p.x << " " << p.y << std::endl;

    return 0;
}


