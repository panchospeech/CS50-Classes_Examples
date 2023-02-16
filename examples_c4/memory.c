#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //int x[3]; manually i can do it with malloc
    int *x = malloc(3 * sizeof(int)); // int uses 4 bites, so this is asking a size of 12
    if (x == NULL)
    {
        return 1;
    }
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;

    free(x);
    return 0;

}