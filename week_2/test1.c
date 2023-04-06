#include <stdio.h>

int main()
{
    printf("please enter the height in foot and inch: ");
    float foot;
    float inch;
    
    scanf("%f %f", &foot, &inch);
    printf("the height is %f feet and %f inches\n", foot, inch);
    printf("the height is %f meter\n", ((foot + inch/12)*0.3048));
    return 0;
}