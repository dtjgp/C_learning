#include <stdio.h>

int main()
{
    int x;
    int one, two, five;
    int exit = 0;
    scanf("%d", &x);

    for (one = 0; one < x*10; one++)
    {
        for (two = 0; two < x*10; two++)
        {
            for (five = 0; five < x*10; five++)
            {
                if (one + two * 2 + five * 5 == x*10)
                {
                    printf(" use %d one,%d two and %d five can make %d yuan\n", one, two, five, x);
                    exit = 1;
                    break;
                }
            if (exit) break;
            }
        if (exit) break;
        }
    }
    return 0;           

}