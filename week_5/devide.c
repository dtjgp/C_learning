#include <stdio.h>

int main()
{
    //int mask = 10000;
    int x = 134256;
    //int cnt = 0;
    int mask = 1;
    int t = x;
    while (t>9)
    {
        t /= 10;
        mask *= 10;
        //cnt++;
    }
    //printf("cnt = %d\n", cnt);

    do
    {
        int d = x / mask;
        printf("%d", d);
        if (mask>9)
        {
            printf(" ");
        }
        x = x % mask;
        mask = mask / 10;
        printf("x = %d, mask = %d, d = %d\n", x, mask, d);
    } while (mask > 0);
    printf("\n");

    return 0;
}