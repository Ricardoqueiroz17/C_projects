#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int sum = 0;
    unsigned int iterations =0;
    unsigned int i;

    printf("\nEnter the number of iterations you want: \n");
    scanf(" %u", &iterations);

    for(i=1;i<=iterations;++i)
    {
        printf("Iteration %u \n", i);
        sum +=i;
    }

    printf("\n Total of the first %u numbers is %u \n",iterations, sum);
}
