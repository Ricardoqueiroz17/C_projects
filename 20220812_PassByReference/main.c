#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);

int main()
{
    int a = 100;
    int b = 200;

    printf("\nBefore swap, a = %d and b = %d\n", a,b);

    swap(&a,&b);

    printf("After the swap: a = %d and b = %d\n", a,b);

    return 0;

}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

/* Defining a function that returns a pointer*/
int *myFunction()
{
    int *p;
    return *p;
}

