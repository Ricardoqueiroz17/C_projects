#include <stdio.h>
#include <stdlib.h>

/* There are two ways of declaring constants: in the beggining of code or passing the "const NAMEOFCONSTANT VALUE OF CONSTANT, as shown below*/

#define TAXRATE 0.1375

void returnCalc()
{
    const float interestRate = 0.15;
    float investment;
    float investment_return;

    printf("Please insert the value of your investment:\n");
    scanf("%f", &investment);
    investment_return = investment * TAXRATE;
    printf("Your return is = %.2f\n", investment_return);

    printf("\n\n==========================\nUsing the other type of constant\n==========================\n\n");
    printf("Please insert the value of your investment:\n");
    scanf("%f", &investment);
    investment_return = investment * interestRate;

    printf("Your return is = %.2f\n", investment_return);
}

int main()
{
    returnCalc();
    return 0;

}
