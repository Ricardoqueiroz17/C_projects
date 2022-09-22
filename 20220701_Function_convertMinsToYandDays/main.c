#include <stdio.h>
#include <stdlib.h>

/* Function that converts a quantity of minutes in Days and Years */

int main()
{
    int min = 0;
    double days = 0.0;
    int intdays = 0;
    int sobradays = 0;
    double years = 0.0;
    int intyears = 0;
    int sobrayears = 0;
    int ble = 365*60;
    printf("INTEIRO YEAR PARA SABER\n");
    printf("%d\n",ble);

    printf("Please, user, type how many minutes you want to convert: \n");
    scanf("%d", &min);

    days = min/60.0;
    intdays = min/60.0;
    printf("Days whole number %f\n", days);
    printf("Days only the integer part %d\n", intdays);
    years = days/365;
    intyears = days/365;
    printf("Years the whole number: %f\n", years);
    printf("Years (only the int part): %d\n", intyears);

    sobradays = (days - (int)(min/60)) * 60;
    sobrayears = (years - (int)(days/365)) * 365;

    printf("%d minutes is equal to %d days and %d minutes.\n \
%d minutes is also equal to %d years and %d days\n", min, intdays, sobradays, min, intyears, sobrayears);


    return 0;
}
