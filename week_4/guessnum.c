#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//guess a number
int main()
{
    srand(time(0));
    int number = rand() % 100 + 1; // random number between 1 and 100, %100 gives 0-99, +1 gives 1-100
    int count = 0;
    int a = 0;
    printf("Guess a number between 1 and 100\n");
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &a);
        count++;
        if (a > number)
        { 
            printf("Too high\n");
        }
        else if (a < number)
        {
            printf("Too low\n");
        }
    } while (a != number);
    printf("You got it in %d tries\n", count);

}