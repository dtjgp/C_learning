#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int digit = 0;
    int ret = 0;

    while (x>0)
    {
        digit = x % 10;
        ret = ret * 10 + digit;
        printf("x = %d, digit = %d, ret = %d\n", x, digit, ret);
        x = x / 10;
    }
    printf("The reverse is %d\n", ret);
    return 0;
}