#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");

    // if you compare s == t in a string, the characters are located in different space in memory, that is why we use strcmp, because that indeed
    //check each char and evaluate if it's the same value
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}