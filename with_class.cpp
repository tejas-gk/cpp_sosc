#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class GuessTheNumber
{
private:
    int secretNumber;
    int maxAttempts;
    int currentAttempt = 0;

public:
    GuessTheNumber(int maxno)
    {
        maxAttempts = maxno;

        srand(static_cast<unsigned int>(time(nullptr)));

        secretNumber = rand() % 100 + 1;
    }

    void playGame()
    {
        cout << "Welcome to Guess the Number Game!\n";
        cout << "Can you guess the secret number?\n";

        while (currentAttempt < maxAttempts)
        {
            int guess;
            cout << "Enter your guess (between 1 and 100): ";
            cin >> guess;
            currentAttempt++;
            if (guess == secretNumber)
            {
                cout << "Congratulations! You guessed the correct number in " << currentAttempt << " attempts.\n";
                return;
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
    }
};

int main()
{
    GuessTheNumber game(5); // You can adjust the number of attempts
    game.playGame();

    return 0;
}