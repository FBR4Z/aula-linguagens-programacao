#include <bitset>
#include <iostream>
#include <climits>

size_t popcount(size_t n) {
    std::bitset<sizeof(size_t) * CHAR_BIT> b(n);
    return b.count();
}

int main() {
    //std::cout << popcount(1000000);
    //std::cout << popcount(123456789123456789123456789);
}