//r Guessing Game o Write a C++ program that asks the user to guess a number between 1 and 100.
// The program should provide hints if the guess is too high or too low.
// Use loops to allow the user multiple attempts. 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed random number
    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess a number between 1 and 100: ";
    do {
        cin >> guess;

        if (guess < secret)
            cout << "Too low! Try again: ";
        else if (guess > secret)
            cout << "Too high! Try again: ";
        else
            cout << "Congratulations! You guessed it right." << endl;

    } while (guess != secret);

    return 0;
}

