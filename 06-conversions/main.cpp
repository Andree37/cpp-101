//
// Created by André Ribeiro on 13/07/2022.
//

#include <string>
#include <iostream>

int main() {
    std::string forty_five = "45";

    int casted = atoi(forty_five.c_str());

    std::cout << casted << std::endl;

    return 0;
}
