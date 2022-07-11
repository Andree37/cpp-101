//
// Created by André Ribeiro on 11/07/2022.
//

#include <iostream>

int main() {
    std::cout << "Hello there!" << std::endl; // will move the cursor to the next line
    // << is the insertion operator and can be combined
    std::cout << "Hi" << " there" << std::endl;

    // we can also read from the standard input
    int x{};

    std::cin >> x;
    std::cout << "You have entered: " << x << std::endl;

    return 0;
}
