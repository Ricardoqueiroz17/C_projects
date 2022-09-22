#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Please type your age:\n");
    scanf("%d", &x);

    if (x >40)
        printf("Oh, you're old!\n");
    else
        printf("You are young!\n");

    printf("2) Another example: IF, ELSE and \
ELSE IF!\n");
    int numteste, sign;
    printf("Please type a number:\n");
    scanf("%d", &numteste);

    if (numteste<0)
        sign = -1;
    else if (numteste==0)
        sign = 0;
    else
        sign = +1;

    printf("The sign of %i is %i\n", numteste, sign);

    printf("Another example:\n");
    int number_tested, remainder;
    printf("Enter a number to be tested:\n");
    scanf("%i", &number_tested);

    remainder = number_tested%2;
    if (remainder != 0)
        printf("The number is odd!\n");
    else
        printf("The number is even.\n");

    printf("Anther example: Using the ? operand \
It is useful to to conditional statement\n");

    int inter1, cond;
    printf("Please type a number for inter1:\n");
    scanf("%i", &inter1);
    cond = inter1 > 7 ? 25:50;
    printf("%i\n", cond);

    return 0;
}
