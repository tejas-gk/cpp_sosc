#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
// bunch arr 5 string
// choose any 1 random
// ask input from user
// check if letter exists
// if all lettrs fils
string chooseRandomWord()
{
    vector<string> wordList = {"apple", "banana", "orange", "grape", "melon"};
    int randomIndex = rand() % wordList.size();
    return wordList[randomIndex];
}

void checkGuess(const string &secretWord, const string &guess)
{
    int correctCount = 0;
    int wordLength = secretWord.length();

    for (int i = 0; i < wordLength; ++i)
    {
        if (secretWord[i] == guess[i])
        {
            cout << '+';
            correctCount++;
        }
        else if (secretWord.find(guess[i]) != string::npos)
        {
            cout << '-';
        }
        else
        {
            cout << ' ';
        }
    }

    cout << "\t\t\tCorrect: " << correctCount << endl;
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    cout << "Welcome to Wordle Clone!" << endl;

    const int maxAttempts = 6;
    string secretWord = chooseRandomWord();
    int attempts = 0;

    while (attempts < maxAttempts)
    {
        string guess;

        cout << "Attempt " << attempts + 1 << "/" << maxAttempts << ": ";
        cin >> guess;

        if (guess == secretWord)
        {
            cout << "Congratulations! You guessed the word: " << secretWord << endl;
            break;
        }
        else
        {
            checkGuess(secretWord, guess);
            attempts++;
        }
    }

    if (attempts == maxAttempts)
    {
        cout << "Sorry, you ran out of attempts. The correct word was: " << secretWord << endl;
    }

    return 0;
}