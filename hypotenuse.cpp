#include <iostream>
#include <string>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

std::tuple<long double, long double, long double> getTheValues() {
    long double a,b,c;
    cout << "Put the length of the first side: ";
    cin >> a;
    cout << "Put the length of the second side: ";
    cin >> b;
    cout << "Put the length of the hypotenuse side: ";
    cin >> c; 
    return std::make_tuple(a,b,c);
}

void ifATriangle(std::tuple<) {

}

int main() {
    ifATriangle(getTheValues());



    return 0;
}

