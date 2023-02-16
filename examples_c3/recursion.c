#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    //stop when n is equal or less to 0
    if (n <= 0)
    {
        return;
    }
    // this is recursion, calling the function inside its function
    draw(n - 1);

    //check iteration to see how it works with loops instead this simplification
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}