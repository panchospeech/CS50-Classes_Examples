#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);

int main(int argc, string argv[])
{
    //run with just 1 comand-line argument (remember argc counts all the arguments in command line)
    if ((argc != 2) || (only_digits(argv[1]) == false))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else //(((argc == 2) && (only_digits(argv[1]) == true)))
    {
        //prompt user for plain text
        string text = get_string("plaintext: ");
        return 0;
    }

    //from a string to int
    int k = atoi(argv[1]);

    //for every char in plaintext:
    //for (int i = 0; i < strlen(text); i++)


        //rotate it with the int called k if its a letter

    //print ciphertext
    //printf("ciphertext: %s\n", argv[1]);
}

//every character in argv[1] is a digit
bool only_digits(string s)
{
    for (char i = 0; i < strlen(s[1]); i++)
    {
        if (isdigit(s[1][i]))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return 0;
}
