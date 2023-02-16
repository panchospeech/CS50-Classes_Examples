#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    // Using the function strlen from string.h
    string name = get_string("What's your name? ");
    int n = strlen(name);
    printf("%i\n", n);
}

//EXPLANATION OF STRLEN
//// How to get the lenght of a string
    //string name = get_string("What's your name? ");

    //int n = 0;
    //while (name[n] != '\0')
    //{
        //n++;
    //}
    //printf("%i\n", n);