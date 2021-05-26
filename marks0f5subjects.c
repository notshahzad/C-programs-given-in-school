#include <stdio.h>
#include <math.h>
int main()
{
    int x = 0, y = 0, z = 0;
    scanf("%d", x);
    scanf("%d", y);
    z = x;
    x = y;
    y = z;
    printf("x = %d", x);
    printf("y = %d", y);
    return 0;
}