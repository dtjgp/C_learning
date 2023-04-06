#include <stdio.h>

int main(void)
{
    int i = 0;
    char *s = "hello world";
    //s[0] = 'B';
    char *s2 = "hello world";
    char s3[] = "hello world";

    printf("&i = %p\n", &i);
    printf("s = %p\n", s);
    printf("s2 = %p\n", s2);
    printf("s3 = %p\n", s3);
    s3[0] = 'b';
    printf("Here!s3[0]=%c\n", s3[0]);
    return 0;
}