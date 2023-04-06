#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    double c = (a + b) / 2.0;
    printf("the avg of %d and %d is %f\n",a,b, c);
}