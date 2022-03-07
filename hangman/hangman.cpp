#include <iostream>

using namespace std;
string update(string guessedWord, string secretWord, char guess);

// update("_______", "HANGMAN", "A") return "_A___A_"
string update(string guessedWord, string secretWord, char guess)
{
    for (int i = 0; i < secretWord.length(); i++)
    {
        if (secretWord[i] == guess)
        {
            guessedWord[i] = guess;
        }
    }
    return guessedWord;
}

int main()
{
    cout << update("_______", "HANGMAN", "A");
}