#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MONTHS 12
#define YEARS 5

/*Calculating the rainfall (inches) by month and year*/

int main()
{
    int year, month;
    float subtot, total;

    float rain[YEARS][MONTHS] =     //YEAR AND MONTHS are constants defined in the beginning of code
    {
        {1.0,2.0,25.0,150.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0},
        {1.0,2.0,25.0,150.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0},
        {1.0,2.0,25.0,150.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0},
        {1.0,2.0,25.0,150.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0},
        {1.0,2.0,25.0,150.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0},
    };

//===TOTAL SUM and AVERAGE of YEAR================================================================================================

    printf("YEAR\t\tRAINFALL (inches)\n");

    for (year = 0 , total = 0 ; year<YEARS ; ++year)
    {
        for(month = 0, subtot = 0 ; month < MONTHS ; ++month)
        {
            subtot += rain[year][month];
        }
        printf("%5d \t%15.1f\n", 2010+year, subtot);
        total += subtot;

    }

     printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);

//===EACH MONTH AVERAGE================================================================================================
     printf("MONTHLY AVERAGES:\n\n");
     printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

     for (month = 0; month < MONTHS ; ++month)
     {
         for (year = 0 , subtot = 0 ; year < YEARS ; year++)
            subtot += rain[year][month];

         printf("%4.1f ", subtot/YEARS);
     }

    return 0;
}
