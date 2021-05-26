#include <stdio.h>
#include <conio.h>
int main(void)
{
    int a = 1, i = 0, sum = 0;
    scanf("%d", &i);
    while (a <= i)
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
            sum++;
        }
        a++;
    }
    printf("total even number = %d", sum);
}