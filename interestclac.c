#include <stdio.h>
#include <conio.h>
int main()
{
    int principle = 0, rate = 0, time = 0, sum = 0;
    float interest = 0;
    printf("input principle :");
    scanf("%d", &principle);
    printf("input rate :");
    scanf("%d", &rate);
    printf("input time :");
    scanf("%d", &time);
    sum += principle;
    sum *= rate;
    sum *= time;
    interest = (float)sum / 100;
    printf("simple interest = %f", interest);
    return 0;
}