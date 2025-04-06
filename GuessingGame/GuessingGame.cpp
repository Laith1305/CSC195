#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int lives = 3;


int main() {
    srand(time(0)); // Seed random number generator
    int randomNumber = rand() % 10 + 1; // Random number from 1 to 10
    //cout << "Random number: " << randomNumber << endl;
    int number;



    while (lives > 0) {



        cout << "Guess a number (1-10): ";
        cin >> number;
        //return 0;
        if (number == randomNumber) {
            cout << "You guessed Correctly!";
            break;
        }
        else {
            lives = lives - 1;

           if (number > randomNumber) {
            cout << "Oops! You guessed too High!" << endl;
            if (lives < 1) {
                cout << "Too bad you lose!";
            }

           }
            else {
            cout << "Uh Oh! You guessed too low!" <<  endl;
            if (lives < 1) {
                cout << "Too bad you lose!";
            }
            }
        }

    }
}


