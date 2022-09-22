#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    return 0;
}

void functNest()
{
    struct date
    {
        int month;
        int day;
        int year;
    };
//================================================================================================
    struct time
    {
        int hour;
        int minutes;
        int seconds;
    };
//================================================================================================
    struct dateAndTime //Nested structure
    {
        struct date sdate;
        struct time stime;
    };
//================================================================================================

struct dateAndTime event = {{12,25,2022},{3,55,12}};

struct dateAndTime eventsList[100];

eventsList[3].stime.hour = 3;
eventsList[0].stime.minutes = 0;

}
