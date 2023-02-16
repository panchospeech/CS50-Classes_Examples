#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");

    // this will create an adress of something using the same amount of memory that char*s but
    // it will not get only the first bite (char *t = s;)
    char *t = malloc(strlen(s) + 1); // + 1 is for /0

    // how do I copy one string into another?
    for (int i = 0; i < strlen(s) + 1; i++) //iterate the lenght of string s including until /0 (end of the string)
    {
        //copy each char of the array (string)
        t[i] = s[i];
    }

    // this make sure the user propmt at least one char
    if (strlen(t) > 0)
    {
        // as t and s are different strings, change only to upper case the first char of t
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}