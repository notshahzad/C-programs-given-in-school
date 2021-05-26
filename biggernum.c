#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0, b = 0;
    printf("input a :");
    scanf("%d", &a);
    printf("input b :");
    scanf("%d", &b);
    if (a > b)
    {
        printf("a>b");
    }
    else if (a < b)
    {
        printf("a<b");
    }
    else
    {
        printf("a=b");
    }
}