#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a = 10;
    int b = 20;
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}

void swap(int *a, int *b)
{
    int t = *a; 
    *a = *b;
    *b = t;
}