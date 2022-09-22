#include <stdio.h>

int main()
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVar = 0;

    printf("integerVar = %i\n",integerVar);
    printf("floatingVar = %f\n",floatingVar);
    printf("DoubleVar = %e\n", doubleVar);
    printf("DoubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVar = %i\n", boolVar);

    printf("Varias vars juntas:\
           \n%i\n%f\n%e\n%g\n%c",
           integerVar, floatingVar,
           doubleVar,doubleVar,charVar);

    float x = 3.99999999999;
    printf("\nAgora acabarams as variaveis, vou\
 mostrar como se define os decimals de um float");
    printf("\nFormat specif the decimals = %.2f", x);

    return 0;
}
