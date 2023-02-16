#include <cs50.h>
#include <stdio.h>

// declare a variable that can be configurate
const int N = 3;

// create a declaration of the function that uses 2 arguments
float average(int length, int array[]);

int main(void)
{
    //create an array of size of N
    int scores[N];
    // get the N scores
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(N, scores));
}

//implement the function
float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i];
        //sum += array[i];
    }
    return sum / (float) length;
}







 // insert 1,2,3 values (from 0 always)
    //scores[0] = get_int("Score: ");
   // scores[1] = get_int("Score: ");
   // scores[2] = get_int("Score: ");
    // this is not well designed, because the code repeats everyline, you can use a loop
//printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);





// not the best design for more scores, use array to get each point individually

    //int score1 = 72;
    //int score2 = 73;
    //int score3 = 33;

    //printf("Average: %f\n", (score1 + score2 + score3) / 3.0);

    // instead of using 3.0 to transform to floatpoint, you can use it like that
     //printf("Average: %f\n", (score1 + score2 + score3) / (float) 3);