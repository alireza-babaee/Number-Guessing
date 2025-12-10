#include <iostream>
#include <random>
#include <limits>
#include <string>

using namespace std;

int main() {
    cout << "****************************************************\n";
    cout << "       WELCOME TO THE NUMBER GUESSING GAME!        \n";
    cout << "****************************************************\n\n";

    // Best modern random number (1-100)
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);
    int secretNumber = dist(gen);

    int guess = 0;
    int tries = 0;

    cout << "I have picked a number between 1 and 100.\nCan you guess it?\n\n";

    do {
        // Force valid input: only integers from 1 to 100 are accepted
        while (true) {
            cout << "Your guess (1-100): ";

            // Check if input is actually a number
            if (!(cin >> guess)) {
                cout << "Error: That's not a number! Try again.\n\n";
                cin.clear();  // clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            // Check if the number is in the correct range
            if (guess < 1 || guess > 100) {
                cout << "Error: " << guess << " is out of range! Please enter a number between 1 and 100.\n\n";
                continue;
            }

            // If we get here, input is perfect
            break;
        }

        tries++;

        if (guess > secretNumber) {
            cout << "Too high!\n\n";
        }
        else if (guess < secretNumber) {
            cout << "Too low!\n\n";
        }
        else {
            cout << "CORRECT! You got it!\n";
            cout << "Secret number: " << secretNumber << "\n";
            cout << "Attempts: " << tries << "\n\n";
            cout << "****************************************************\n";
            cout << "                  GAME OVER - YOU WIN!              \n";
            cout << "****************************************************\n";
        }

    } while (guess != secretNumber);

    return 0;
}