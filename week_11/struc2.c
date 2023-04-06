#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct  point getStuct(void);
void output(struct point);

int main(int argc, char const *argv[])
{
    struct point y = {0,0};
    y = getStuct();
    output(y);
    
}
struct point getStuct(void)
{
    struct point p;
    scanf("%d", &p.x);
    scanf("%d", &p.y);
    printf("x = %d, y = %d\n", p.x, p.y);
    return p;
}

void output(struct point p)
{
    printf("x = %d, y = %d\n", p.x, p.y);
}
