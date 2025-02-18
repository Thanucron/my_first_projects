#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

int main() {

    for (int i = 0;i<256;i++) {
        cout << (char)i << i << '\t';
    }

    return 0;
}