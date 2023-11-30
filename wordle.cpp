#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include<stack>

using namespace std;

class WordleGame
{
private:
    string secretWord;
    vector<char> guessedWord;

public:
    WordleGame(const string &word) : secretWord(word)
    {
        guessedWord = vector<char>(secretWord.length(), '_');
    }

    void displayGuessedWord()
    {
        for (char letter : guessedWord)
        {
            cout << letter << " ";
        }
        cout << endl;
    }

    bool isWordGuessed()
    {
        string guessedWordStr(guessedWord.begin(), guessedWord.end());
        return guessedWordStr == secretWord;
    }

    void guessLetter(char letter)
    {
        for (int i = 0; i < secretWord.length(); ++i)
        {
            if (secretWord[i] == letter)
            {
                guessedWord[i] = letter;
            }
        }
    }
};

int main()
{
    srand(static_cast<unsigned>(time(0)));

    vector<string> words = {"apple", "banana", "orange", "grape", "cherry"};
    string secretWord = words[rand() % words.size()];

    WordleGame game(secretWord);

    int attempts = 0;
    const int maxAttempts = 7;

    cout << "Welcome to Wordle!" << endl;

    while (attempts < maxAttempts && !game.isWordGuessed())
    {
        cout << "Attempt " << attempts + 1 << "/" << maxAttempts << endl;
        game.displayGuessedWord();

        char guess;
        cout << "Enter your guess: ";
        cin >> guess;

        game.guessLetter(guess);

        ++attempts;
    }

    if (game.isWordGuessed())
    {
        cout << "Congratulations! You guessed the word: " << secretWord << endl;
    }
    else
    {
        cout << "Sorry, you ran out of attempts. The word was: " << secretWord << endl;
    }
    
    stack<int> s;
    s.push(1);
    s.push(2);
    s.pop();

    return 0;
}
