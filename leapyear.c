#include <stdio.h>
#include <stdbool.h>

int isleap(int);
int main(void)
{
    int inpyear = 0;
    scanf("%d", &inpyear);
    int LeapOrNot = isleap(inpyear);
    printf(LeapOrNot ? "leap year" : "not leap year");
}
int isleap(int year)
{
    bool leap = false;
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            leap = true;
        }
        else if (year % 400 == 0)
        {
            leap = true;
        }
    }
    return leap;
}