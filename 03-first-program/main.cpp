//
// Created by André Ribeiro on 11/07/2022.
//

#include <iostream>

int main() {
    std::cout << "Insert a number: ";

    int num{};
    std::cin >> num;

    std::cout << "The double of the input number is: " << num * 2 << std::endl;
    std::cout << "The triple of the input number is: " << num * 3 << std::endl;
    return 0;
}
