#include <stdio.h>
#include <stdlib.h>

float multiply02(void)
{
    int x,y;
    printf("Please enter the number x:\n");
    scanf("%d", &x);

    printf("Please enter the number y:\n");
    scanf("%d", &y);

    float res = x * y;
    return res;

}
