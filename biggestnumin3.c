#include <stdio.h>
int main(void)
{
    int nums[3];
    int temp = 0, biggest = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &temp);
        nums[i] = temp;
    }
    for (int x = 0; x < 3; x++)
    {
        (biggest < x) ? (x = biggest) : (return 0);
    }
}