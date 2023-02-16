#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s); //print the element located in the pointer s (first char of the array) s[0]
    printf("%c\n", *(s+1)); // print the contiguos element s[1]
    printf("%c\n", *(s+2)); // as it should be print s[2] is the same


}



        // char *s is the same that string that is created in cs50 library
    //char *s = "HI!";
        // if we print the pointer (the address) of the array of chars and the pointer of the first char of the array, they are located in the
        // same space of memory. the other elements of the array (String) are consecutive
    //printf("%p\n", s);
    //printf("%p\n", &s[0]);
    //printf("%p\n", &s[1]);
    //printf("%p\n", &s[2]);
    //printf("%p\n", &s[3]);



    //int n = 50;
        // *p gets the address of int n (it needs & to locate it first)
        // declare int *p which is the pointer and &n is the address
    //int *p = &n;
        // go there, de reference p (tell me its value)
    //printf("%i\n", *p);