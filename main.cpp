//
// Created by André Ribeiro on 15/11/2023.
//

#include <iostream>
#include <ostream>
#include <set>
#include<map>

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

    // smart pointers
    std::shared_ptr<int> pShared;
    *pShared = 42;

    std::shared_ptr<std::string> pSharedString(new std::string("Hello"));

    // There are several kinds of smart pointers.
    // The way you have to use them is always the same.
    // This leads us to the question: when should we use each kind of smart pointer?
    // std::unique_ptr - use it when you just want to hold one reference to
    // the object.
    // std::shared_ptr - use it when you want to hold multiple references to the
    // same object and want to make sure that it's deallocated
    // when all references are gone.
    // std::weak_ptr - use it when you want to access
    // the underlying object of a std::shared_ptr without causing that object to stay allocated.
    // Weak pointers are used to prevent circular referencing.

    // Containers
    vector<string> my_vector;
    my_vector.push_back("some value");
    // to iterate we can do
    for (int i = 0; i < my_vector.size(); i++)
    {
        cout << my_vector[i] << endl;
    }

    // or we can create an iterator
    vector<string>::iterator it;
    for (it = my_vector.begin(); it != my_vector.end(); it++)
    {
        cout << *it << endl;
    }

    // sets
    set<int> my_set;
    my_set.insert(1);

    // we can also iterate through sets using an iterator
    set<int>::iterator it2;
    for (it2 = my_set.begin(); it2 != my_set.end(); it2++)
    {
        cout << *it2 << endl;
    }

    // maps
    std::map<string, int> my_map;
    my_map.insert(pair<string, int>("one", 1));

    map<string, int>::iterator it3;
    for (it3 = my_map.begin(); it3 != my_map.end(); it3++)
    {
        cout << it3->first << " " << it3->second << endl;
    }

    it3 = my_map.find("one");
    cout << it3->second;
    // Output: 1

    // NOTE: For hash maps, use unordered_map. They are more efficient but do
    // not preserve order. unordered_map is available since C++11.


    // lambda
    vector<pair<int, int>> points;
    points.push_back(make_pair(1, 1));
    points.push_back(make_pair(1, 2));
    points.push_back(make_pair(2, 2));

    sort(points.begin(), points.end(), [](const pair<int, int>& p1, const pair<int, int>& p2)
    {
        return p1.first < p2.first;
    });

    // capture variables
    vector<int> dog_ids;
    // number_of_dogs = 3;
    for (int i = 0; i < 3; i++)
    {
        dog_ids.push_back(i);
    }

    int weight[3] = {30, 50, 10};

    // Say you want to sort dog_ids according to the dogs' weights
    // So dog_ids should in the end become: [2, 0, 1]

    // Here's where lambda expressions come in handy

    sort(dog_ids.begin(), dog_ids.end(), [&weight](const int& lhs, const int& rhs)
    {
        return weight[lhs] < weight[rhs];
    });

    // range for loop
    vector<int> v = {0, 1, 2, 3, 4, 5};

    for (int elem : v)
    {
        cout << elem << " ";
    }

    return 0;
}


