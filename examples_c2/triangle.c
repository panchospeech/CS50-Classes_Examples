#include <cs50.h>
#include <stdio.h>

int valid_triangle(int x, int y, int z);

int main(void)
{
    int sides[3];
    for (int i = 0; i < 3; i++)
    {
        sides[i] = get_int("Side: ");
    }

    // still dont know how to print
    if (valid_triangle(sides[0], sides[1], sides[2]) == 0)
    {
        printf("false\n");
    }
    else
    {
        printf("true\n");
    }


    //printf("%i\n", valid_triangle(sides[0], sides[1], sides[2]));

}

int valid_triangle(int x, int y, int z)
{
    if (x <= 0 || y <= 0 || z <=0)
    {
        return 0;
    }
    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return 0;
    }
    return 1;
}