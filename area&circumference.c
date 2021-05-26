#include <stdio.h>
#include <conio.h>
int main()
{
    const float pie = 3.14;
    float area = 0, circumference = 0;
    int radius = 0;
    scanf("%d", &radius);
    circumference = 2 * pie * radius;
    radius *= radius;
    area = pie * radius;
    printf("circumference = %f", circumference);
    printf("area = %f", area);
    getch();
    return 0;
}