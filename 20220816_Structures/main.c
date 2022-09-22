#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fStruct();

int main()
{
    fStruct();
    return 0;
}

void fStruct()
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today;
    today.month = 8;
    today.day = 16;
    today.year = 2022;

    printf("Today's date is %i%i%2i.\n", today.month, today.day, today.year %100);

    /* Another way of declaring structures*/
    struct date yesterday;
    yesterday = (struct date){.month=8,.day=16, .year=2022};
    printf("yesterday: %i %i %i\n", yesterday.month, yesterday.day, yesterday.year);

    /* Declaring arrays of structures elements */
    struct date myDates[10] = {{12,25,2022}, {11,21,2015}, {8,28,2010}};

    struct month
    {
        int numberOfDays;
        char name[3];
    };

    struct month aMonth;
    aMonth.name[0] = 'J';
    aMonth.name[1] = 'a';
    aMonth.name[2] = 'n';

    aMonth.numberOfDays = 31;
    //Another way of declaring:

    struct month bMonth = {31,{'J','a','n'}};
}


