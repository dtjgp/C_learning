//常量符号化
#include  <stdio.h>

enum COLOR {red, yellow, green};

int main(int argc, char const *argv[])
{
    int color = -1;
    char *colorName = NULL;
    printf("Enter a color (0-red, 1-yellow, 2-green): ");
    scanf("%d", &color);
    switch (color)
    {
    case red:
        colorName = "red";
        break;
    case yellow:
        colorName = "yellow";
        break;
    case green:
        colorName = "green";
        break;
    }
    printf("your favorite color is %s\n", colorName);
    
    return 0;
}