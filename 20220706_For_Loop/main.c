#include <stdio.h>
#include <stdlib.h>

//For loop example
int main()
{
    for(int i = 1,j = 2; i <= 5; ++i , j=j+2) /* ++ is an increment operator (it sums 1 to the variabe) */
        printf(" %5d",i*j);
    return 0;

}

