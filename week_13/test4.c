#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0x80000000;
    unsigned int b = 0x80000000;
    printf("%d\n", a);
    printf("%u\n", b);
    printf("%d\n", a>>1);
    printf("%u\n", b>>1);
    return 0;
}