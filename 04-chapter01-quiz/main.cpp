//
// Created by André Ribeiro on 11/07/2022.
//

#include <iostream>

int main() {
    int x{}, y{};

    std::cout << "Enter an integer: ";
    std::cin >> x;

    std::cout << "Enter another integer: ";
    std::cin >> y;

    std::cout << x << " + " << y << " is: " << x + y << std::endl;
    std::cout << x << " - " << y << " is: " << x - y << std::endl;
}
