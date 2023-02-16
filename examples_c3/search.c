#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //create an array of x (7) numbers defined later
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");

    //implementation of linear search
    for (int i = 0; i < 7; i++)
    {
        //if the current number is equal to the number promt by user
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}