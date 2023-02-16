#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    {
        // this is the application of the function
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}

//Explanation of the uppercase without the function toupper in ctype

  //in english this means is lower case, all characters higher than "a" and lower than "z"
        //if (s[i] >= 'a' && s[i] <= 'z')
        //{
            //to print out the uppercase, all the lowercase are 32+ (in unicode) of uppercase
            //printf("%c", s[i] - 32);
        //}
        //else
        //{
            //printf("%c", s[i]);
        //}