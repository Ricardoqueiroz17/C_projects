#include <stdio.h>
#include <stdlib.h>


// The C code always needs to have the "main" function. Since the other functions
// created will be used in the "main", we have to declare them before "main"

void multiplyTwoNumbers(int x , int y)  /* void is the command you use to say the function won't return any result */
{
    int result = x * y;
    printf("The product of %d multip. by %d is: %d\n", x,y,result);

}

int main(void) //void is a way of saying "nothing is passing as parameter"
{
    multiplyTwoNumbers(10,20);

    float result02 = multiply02();
    printf("Result of ex02 is: %.2f\n", result02);

    return 0;
}
