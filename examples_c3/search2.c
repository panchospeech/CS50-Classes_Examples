#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //create an array of x (7) numbers defined later
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");

    //implementation of linear search
    for (int i = 0; i < 6; i++)
    {
        //you can compare strings just like that, its not like and int, so its needed a function, cuz its needed
        //to compare each char // does the return value of a function called string compare equals 0 when
        //passed in the current string and the string prompt by user?
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}