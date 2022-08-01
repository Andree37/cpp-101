#include <iostream>
#include <string>

void print_me(std::string& str) {
    std::cout << str << std::endl;
}

void print_me_but_no_changes(const std::string& str) {
    // this works as previous, but it ensures that we cannot change str inside this function
    std::cout << str << std::endl;
}

int main() {
    std::string str{"hello there"};
    print_me(str);
    print_me_but_no_changes(str);
    print_me_but_no_changes("5");
}
