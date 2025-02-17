#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

enum Pick{rock, paper, scissors};

int pickNumPc() {
    srand(time(NULL));  //start rand 
    int choice_pc = (rand() % 3);
    return choice_pc;
}

int main() {
    int rounds;
    cout << "How many rounds?: ";
    cin >> rounds;
    int lives_user;
    int lives_pc;
    int choice_pc = pickNumPc();
    Pick choice_user;
    

    return 0;
}