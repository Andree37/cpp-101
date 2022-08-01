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

    int x{5};

    int* ptr1;       // garbage pointer
    int* ptr2{};     // null pointer
    int* ptr3{&x};   // pointer to x

    ptr1 = nullptr;   // make ptr1 a null pointer
    // dereferencing this pointer can be dangerous as it can create some undefined behavior
    if (ptr1 == nullptr) {
        std::cout << "null pointer lel" << std::endl;
    }
}
