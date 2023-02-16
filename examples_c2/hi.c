#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    // "Words" is an array of strings and a string is an array of characters so you can access the characters of the string this way
    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);

}

//EXPLANATION
// strings are an array of characters (or integers) so the array "HI!" is composed by 3 + 1 (/0) elements
    //string s = "HI!";

    //printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    //this prints 72, 73, 33, /O (the numbers are the unicode for the letters)