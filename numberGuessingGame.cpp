#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess = 0;
    cout << "Guess a number between 1 and 100:\n";
    while (guess != secret) {
        cin >> guess;
        if (guess > secret)
            cout << "Too high\n";
        else if (guess < secret)
            cout << "Too low\n";
        else
            cout << "Correct!\n";
    }
    return 0;
}
