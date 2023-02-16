#include <stdio.h>

int main(void)
{
    // creating get string manually, remember char*s is a string
    // define it as NULL for initializing
    char *s = NULL;
    // i need to ask for memory with memory to allocate the string, otherwise the result is gonna be null
    // we need a loop to check how many chars user is prompting to ask for memory
    printf("s: ");
    scanf("%s", s); // there is no need of & because s is already an address (char *s as a string)
    printf("s: %s\n", s);
}

