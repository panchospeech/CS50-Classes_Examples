#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int)); // same as int list[4]
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // ...
    // ask for 4 new bytes for a new value

// you can use reallocate memory to copy the old array to the new one
    int *tmp = realloc(list, 4 * sizeof(int)); // 2 arguments, what to copy and then the new size
    if(tmp == NULL)
    {
        free(list);
        return(1);
    }
    list = tmp; // replace the adress

    list[3] = 4; // add the new value

        for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
    return 0;

// this is the other way (not optimizied)

    int *tmp = malloc(4 *sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // copy the old array into the new
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    // add the new byte
    tmp[3] = 4;

    // free the original address of list
    free(list);

    // replace the name of the pointers (array) points the other address
    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
    return 0;
}