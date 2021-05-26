#include <stdio.h>
#include <conio.h>

int main()
{
    int num, rev = 0, a = 0, b = 0, c = 0, d = 0, ;
    scanf("%d", &num);
    a = num % 10;
    b = (num % 100) - a;
    c = (num % 1000) - (a + b);
    d = num - (a + b + c + d);
    rev = (a * 1000) + (b * 10) + (c / 10) + (d / 1000);
    printf("num = %d", rev);
    getch();
    return 0;
}