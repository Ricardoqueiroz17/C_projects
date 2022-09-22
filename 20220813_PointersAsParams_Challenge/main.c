#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pointSquare(int * const point);

int main()
{
    int number;
    printf("Please insert a number:\n");
    scanf("\n%d", &number);

    pointSquare(&number); //Call the function
    printf("\nThe square of number is: %d\n", number);
    return 0;
}

void pointSquare(int * const pN) // We dont want to change the value of the address of pN, so the "const" goes after the * and before pN.
                                // If "const" was before *, it would turn constant the value where pN points to.
{
    *pN = (*pN) * (*pN);

}
