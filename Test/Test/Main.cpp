#include <iostream>
#include <cstring>

using namespace std;

char guessLetter();

int main()
{
    string word;
    string guessWord;

    int lives = 7;

    cout << "Input a word: ";
    cin >> word;

    system("CLS");

    for (int i = 0; i < word.length(); i++)
        guessWord += "_";

    do
    {
        cout << "You have " << lives << " lives left\n";
        cout << "Here is the word:\n" << guessWord << endl;
        char temp = guessLetter();

        do 
        {
            bool guess = false;

            for (int i = 0; i < word.length(); i++)
            {
                if (word[i] == temp)
                {
                    guessWord[i] = temp;
                    guess = true;
                }
            }

            if (guess == false)
                lives--;
        } while (false);
    } while (guessWord != word && !lives == 0);

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