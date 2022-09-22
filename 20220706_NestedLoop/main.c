#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int count = 5;


    for(i = 0; i<=count; ++i)
    {
        int sum = 0;
        for(int j = 1; j <= i; ++j)
            sum += j;
        printf("\n%d\t%d",i,sum);
    }

    return 0;
}
