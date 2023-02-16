#include <stdio.h>
#include <stdlib.h>

// declare this struct node to define 2 elements, a number and the pointer to the next node
typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++) // iterate each argument given, starts at 1 because 0 is program name
    {
        int number = atoi(argv[i]); // atoi converts char to int

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;

        n->next = list;
        list = n;
    }

    // how to print each element of the list FORM 1
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

    // how to print each element of the list FORM 2: re place and simplify line 33 and 34
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)


    // how to free each node
    ptr = list;
    while (ptr != NULL)
    {
        // free ptr node, but we need a temporary node to save the next one
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}