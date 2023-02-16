#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    // using & is to give us the address of x and y
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}
// using * is to go this especific address, so now int a and int b is treated as addresses instead of ints
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}