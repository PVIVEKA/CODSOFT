#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guess() {
    int num, a = 1, turns = 9;
    cout << "Are you ready? Start guessing!!" << endl;
    cout << "Guess between 1 and 100" << endl;
    int guessednumber = rand() % 100 + 1;
    do {
        cout << "Turns remaining: " << turns + 1 << endl;
        cout << "Enter your guess: ";
        cin >> num;
        if (num == guessednumber) {
            cout << "Congratulations! You have found the secret number" << endl;
            a = 0;
        } else if (num < guessednumber) {
            cout << "Your guess is too low" << endl;
        } else if (num > guessednumber) {
            cout << "Your guess is too high" << endl;
        }
    } while (a == 1 && turns--);
}

int main() {
    string input;
    bool isgame = true;
    while (isgame) {
        guess();
        cout << "Want to give it another try? Type 'yes' else type 'no': ";
        cin >> input;
        if (input == "yes") {
            isgame = true;
        } else {
            cout << "Thank You...";
            isgame = false;
        }
    }
    return 0;
}

