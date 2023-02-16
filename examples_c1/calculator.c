#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Adition as a variable
    int z = x + y; // reusable variable

    // Perform addition
    printf("%i\n", x + y); // original: printf("%i\n", z);
}