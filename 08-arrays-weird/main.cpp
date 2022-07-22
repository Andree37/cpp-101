
#include <iostream>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    std::cout << "first: " << a[3] << std::endl;
    std::cout << "second: " << *(a + 3) << std::endl;
    std::cout << "third: " << 3 [a] << std::endl;
}