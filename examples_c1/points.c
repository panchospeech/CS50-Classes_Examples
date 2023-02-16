#include <cs50.h>
#include <stdio.h>

// Conditionals

int main(void)
{
    // Create a constant make the variable mine invariable to not screw up later, you can capitalize as a visual reminder
    const int MINE = 2;
    int points = get_int("How many points did you lose? ");

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points than me.\n");
    }
}
