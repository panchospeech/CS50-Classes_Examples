#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    if (s == NULL) // if user prompt a string to big to fit in memory, close programm
    {
        return 1;
    }

    // this will create an adress of something using the same amount of memory that char*s but
    // it will not get only the first bite (char *t = s;)
    char *t = malloc(strlen(s) + 1); // + 1 is for /0
    if (t == NULL)
    {
        return 1;
    }

    //this is a function already created to copy strings
    strcpy(t, s); // destination first and then origin

        // how do I copy one string into another? OPTIMIZATION IN CONDITION (create a value that replace strlen + 1 for n)
    //for (int i = 0, n = strlen(s) + 1; i < n; i++) //iterate the lenght of string s including until /0 (end of the string)
    //{
            //copy each char of the array (string)
        //t[i] = s[i];
    //}

    // this make sure the user propmt at least one char
    if (strlen(t) > 0)
    {
        // as t and s are different strings, change only to upper case the first char of t
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    //RULE if you ask for memory, you have to set it free at the end. You dont have to get free of memory of getstring
    free(t);

    //everything is working
    return 0;
}