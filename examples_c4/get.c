#include <stdio.h>

int main(void)
{
    // how int x = get_int("x: ") is created manually
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x);
}