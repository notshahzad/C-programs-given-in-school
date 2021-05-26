#include <stdio.h>
#include <conio.h>
int main()
{
    int x = 0, y = 0, z = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    z = x;
    x = y;
    y = z;
    printf("x = %d \ny = %d", x, y);
    return 0;
}