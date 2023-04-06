#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void *p;
    int cnt = 0;
    while ((p = malloc(100)))
    {
        cnt++;
    }
    printf("Allocated %d MB\n", cnt);
    free(p);
    return 0;
}