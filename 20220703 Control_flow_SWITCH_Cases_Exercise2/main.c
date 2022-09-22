#include <stdio.h>
#include <stdlib.h>

/*This program will calculate the weekly pay of
an employee */

int main()
{
    int hoursweek, grosspay;
    double taxes, netpay;

    printf("Please enter the amount of hours worked:\n");
    scanf("%i", &hoursweek);

    //GROSS PAY
    if (hoursweek > 40)
        grosspay = 40*12 + (hoursweek-40)*1.5*12;
    else
        grosspay = hoursweek * 12;

    //TAXES
    if (grosspay > 450)
        taxes = (grosspay-450)*0.25 + 150*0.20 + 300*0.15;
    else if (grosspay > 300)
        taxes = (grosspay-300)*0.20 + 300*0.15;
    else
        taxes = grosspay*0.15;

    netpay = grosspay-taxes;

    printf(\
"Total grosspay: %i\n \
Total taxes: %f\n \
Net Pay = %f \n", grosspay, taxes, netpay);

    return 0;
}
