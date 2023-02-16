#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int scores[1024];
    // if you dont initialize any value f.e (scores[0] = 13 it will create and use garbage values)
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}