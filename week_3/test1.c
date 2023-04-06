#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int f;
    int g;
    scanf("%d %d", &a, &b);
    c = a/100 * 60 + a%100 + b;
    d = c/60;
    f = c%60;
    g = d*100 + f;
    printf("%d\n", g);
    return 0;
}