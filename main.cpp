#include <iostream>
#include <cstdlib> // for srand and rand
#include <ctime>   // for time
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    bool found = false;

    cout << "Welcome to the Number Guessing Game!" << endl;

    while (!found) {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed it." << endl;
            found = true;
        } else if (guess < secretNumber) {
            cout << "Too low. Try again!" << endl;
        } else {
            cout << "Too high. Try again!" << endl;
        }
    }

    return 0;
}
