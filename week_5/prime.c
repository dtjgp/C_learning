#include <stdio.h>

int main()
{
    int x;
    int cnt = 0;
    //for (x=1; cnt<50; x++)
    x = 1;
    while (cnt<50)
    {
        int i;
        int is_prime = 1;
        for (i=2; i<x; i++)
        {
            if (x % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            cnt ++;
            printf("%d\t", x);
            if (cnt % 10 == 0)
            {
                printf("\n");
            }
        }
        x++;
    }
    return 0;
}