#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("13.in", "r");
    if (fp)
    {
        int num;
        fscanf(fp, "%d", &num);
        printf("%d\n", num);
        fclose(fp);
    }
    else
    {
        printf("File not found!\n");
    }
    return 0;
}