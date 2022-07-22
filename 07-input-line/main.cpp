//
// Created by André Ribeiro on 13/07/2022.
//

#include <iostream>
#include <string>

void printStringView(std::string_view v) {
    std::cout << v;
}

int main() {
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);   // read a full line

    std::cout << "Enter your age: ";
    std::string age{};
    std::getline(std::cin >> std::ws, age);   // read a full line

    std::cout << "Your name is " << name << " and you are " << age << " years old." << std::endl;

    // string string_view
    std::string_view sv = "a string view";
    printStringView(sv);
    return 0;
}
