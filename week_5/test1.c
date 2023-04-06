#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    int factor = 1;
    int i = 1;
    for (i = 1; i <= n; i++)
    {
        factor = factor * i;
    }
    printf("The factorial of %d is %d\n", n, factor);
    return 0;
}