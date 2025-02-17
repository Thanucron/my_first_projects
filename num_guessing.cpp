#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

unsigned short pickLevel() {
    unsigned short level;
    cout << "Guessing game" << endl;
    while (true) {
        cout << "Pick your level of difficulty" << endl;
        cout << "1 -> Easy, 2-> Normal, 3->Hard: ";
        cin >> level;
        if (level != 1 && level != 2 && level != 3) {
            cout << "This is not an option" << endl;
        }
        else {
            break;
        }
    }
    return level;
}

std::pair<int,int> pickANum(unsigned short level) {
    srand(time(NULL));
    int maxrange = (int)(pow(50,level)+100);
    int rand_num = (rand() % maxrange) + 1;
    return std::make_pair(rand_num, maxrange);        // how to 
}

void gameLogic(unsigned short & lives, std::pair<int,int>rand_max_pair) {
    int pc_pick = rand_max_pair.first;
    int maxrange = rand_max_pair.second;
    int picked_num;
    do {
        cout << pc_pick<< endl;
        cout << "You've got " << lives << "guesses " << endl;
        cout << "Pick a number ranging from 1 to " << maxrange << endl; 
        cin >> picked_num;
        if (picked_num == pc_pick) {
            break;
        }
        else if (picked_num > pc_pick){
            cout << "Your guess is bigger than the number" << endl;
        }
        else {
            cout << "Your guess is smaller than the number" << endl;
        }
        lives--;
    } while (lives > 0);

    if (lives > 0) {
        cout<< "You won!"  << endl;
    }
    else {
        cout << "You lost 😭" << endl;
    }
}

bool ifAgain() {
    char again;
    cout << "Wanna try one more time? (Y/N): " << endl;
    cin >> again;
    return ((again = 'Y') ? true : false);      // play around to fit many into one return statement
}

int main() {
    while (true) {
        unsigned short level = pickLevel();
        unsigned short lives = floor(10-(2/3*level));       // you can override variables within different funcitons, ::var_name -> global instead of local 
        cout << lives;
        gameLogic(lives, pickANum(level));
        cout << ifAgain();
    }
    return 0;
}

// array => static data structure