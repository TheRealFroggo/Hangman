#include <iostream>
#include <cstring>

using namespace std;

char guessLetter();

int main()
{
    string word;
    string guessWord;

    cout << "Input a word: ";
    cin >> word;

    system("CLS");

    for (int i = 0; i < word.length(); i++)
        guessWord += "_";

    do
    {
        cout << "Here is the word:\n" << guessWord << endl;
        char temp = guessLetter();

        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == temp)
                guessWord[i] = temp;
        }
    } while (guessWord != word);

    system("CLS");

    if (guessWord == word)
        cout << "Congratulations, the word is: " << word;
    else
        cout << "lol u suk";

    return 0;
}

char guessLetter()
{
    char letter;

    cout << "Guess a letter: ";
    cin >> letter;

    return letter;
}