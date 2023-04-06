#include <stdio.h>

int isPrime();

int main(void)
{
    const int number = 100;
    int prime[number] = {2};
    int count = 1;
    int i = 3;
    while (count < number)
    {
        if (isPrime(i, prime, count))
        {
            prime[count] = i;
            prime[count++] = i;
        }
        i++;
    }
    for (int i = 0; i < number; i++)
    {
        printf("%d ", prime[i]);
        if ((i + 1) % 5 == 0)
        {
            printf("\t");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}
int isPrime(int x, int prime[], int count)
{
    int ret = 1;
    int i;
    for (int i = 0; i < count; i++)
    {
        if (x % prime[i] == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}