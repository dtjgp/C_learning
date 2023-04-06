#include  <stdio.h>

int f(void);

int gAll = 12;

int main(int argc, char const *argv[])
{
    //printf("in %s gAll = %d\n", __func__, gAll);
    f();
    f();
    f();
    //printf("in %s gAll = %d\n", __func__, gAll);

    return 0;
}
int f(void)
{
    static int all = 1;
    printf("in %s All = %d\n", __func__, all);
    all += 2;
    printf("in %s all = %d\n",  __func__, all);
    return all;
}