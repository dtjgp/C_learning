#include <stdio.h>

int main()
{
    int ac[] = {0,1,2,3,4,5,6,7,8,9,-1};
    int *p = &ac[0];
    while ( *p != -1)
    {
        printf("%d\n ", *p++);
    }
    return 0;
}