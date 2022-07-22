#include <bitset>
#include <iostream>

int main() {
    std::bitset<8> bits{0b0000'0101};
    bits.set(3);     // set bit on position 3 to 1
    bits.flip(4);    // flips bit on position 4
    bits.reset(4);   // reset bits on position 4
    bits.set(5);     // set bit on position 5 to 1

    std::cout << "All the bits: " << bits << std::endl;
    std::cout << "Bit on position 3 " << bits.test(3) << std::endl;
    std::cout << "Bit on position 4 " << bits.test(4) << std::endl;

    std::bitset<4> shifts{0b0010};
    std::cout << "Shifted two left bits " << (shifts << 2) << std::endl;          // 1000
    std::cout << "Shifted one left bit " << (shifts << 1) << std::endl;           // 0100
    std::cout << "Shifted one right bit " << (shifts >> 1) << std::endl;          // 0001
    std::cout << "Shifted one right bit " << ((shifts >> 2) << 2) << std::endl;   // 0000 as he loses the information

    std::cout << "Negative bit " << ~shifts << std::endl;   // 0000 as he loses the information
}