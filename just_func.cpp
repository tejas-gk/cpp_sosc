#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
int main(){
    int secretNumber;
    int maxAttempts;
    int currentAttempt = 0;
    cout << "Welcome to Guess the Number Game!\n";
    cout << "Can you guess the secret number?\n";
    cout << "Enter the number of attempts: ";
    cin >> maxAttempts;
    srand(static_cast<unsigned int>(time(nullptr)));
    secretNumber = rand() % 100 + 1;
    cout<<secretNumber;
    return 0;
    while (currentAttempt < maxAttempts)
    {
        int guess;
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;
        currentAttempt++;
        if (guess == secretNumber)
        {
            cout << "Congratulations! You guessed the correct number in " << currentAttempt << " attempts.\n";
            return 0;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low! Try again.\n";
        }
        else
        {
            cout << "Too high! Try again.\n";
        }
    }
    cout << "Sorry, you've run out of attempts. The correct number was: " << secretNumber << "\n";
    return 0;
}