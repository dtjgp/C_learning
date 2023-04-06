#include <stdio.h>

int main()
{
    int cm;
    scanf("%d", &cm);
    int foot;
    int inch;
    foot = cm / 30.48;
    inch = (cm / 30.48 - foot) * 12;
    printf("%d %d\n", foot, inch);
     return 0;
}