#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=1;
    while(count<=5)
    {
        printf("%i\n", count);
        ++count;
    }

    /*Another example of loop */
    int num=0;
    scanf("%d\n", &num);
    while(num !=-1)
    {
        printf("Oh Oh! %d is not the correct number!\n", num);
        scanf("%d\n", &num);
    }
    return 0;
}


