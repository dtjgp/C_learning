#include <stdio.h>
#include <string.h>

int mylen(const char* s)
{
    int cnt = 0;
    int idx = 0;
    while ( s[idx] != '\0' )
    {
        cnt++;
        idx++;
    }
    return cnt;
}
int main(int argc, char const *argv[])
{
    char line[] = "hello";
    printf("strlen=%lu\n", strlen(line));
    printf("sizeof=%lu\n", sizeof(line));

    return 0;
}