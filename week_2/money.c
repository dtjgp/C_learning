#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    double amount = x * (1 + 0.00417) * (1 + 0.00417) * (1 + 0.00417);
    printf("amount = %f\n", amount);
}