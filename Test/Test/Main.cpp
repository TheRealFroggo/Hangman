#include <iostream>
#include <cstring>

using namespace std;

char guessLetter();

int main()
{
    string word;
    string guessWord;
    string guessedLetters = "";

    int lives = 7;

    cout << "Input a word: ";
    cin >> word;
    for (int i = 0; i < word.length(); i++)
        word[i] = tolower(word[i]);

    system("CLS");

    for (int i = 0; i < word.length(); i++)
        guessWord += "_";

    do
    {
        cout << "You have " << lives << " lives left\n";
        cout << "Here is the word:\n" << guessWord << endl;
        cout << "The word is " << word.length() << " letters long\n";
        cout << "Letters you have guessed: " << guessedLetters << endl;

        char temp = guessLetter();
        
        temp = tolower(temp);

        guessedLetters += temp;

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

        system("CLS");

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