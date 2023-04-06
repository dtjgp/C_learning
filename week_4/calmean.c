#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;

  
    scanf("%d", &number);
    while (number != -1)
    {
        sum += number;
        count++;
        scanf("%d", &number);
    }
   
    
    printf("The average is %f\n", (float)sum/count);
    return  0;
}