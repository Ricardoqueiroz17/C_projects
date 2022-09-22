#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date /* Its better to declare structures outside of the functions, just like a global variable */
    {
        int month;
        int day;
        int year;
    };
//====================================================================================================================

void funcPointStruct();
void func2();

int main()
{
    funcPointStruct();
    printf("\n FUNCTION 02 - MORE ABOUT STRUCT WITH POINTERS\n");
    func2();
    return 0;

}

void funcPointStruct()
{


    struct date today, *datePtr;
    datePtr = &today;

    datePtr -> month = 9;
    datePtr -> day = 25;
    datePtr -> year = 2010;

    printf("The date today is %i/%i/%.2i.\n", datePtr->month,datePtr->day, datePtr->year%100);
}

void func2()
{
    struct intPtrs
    {
        int *p1;
        int *p2;
    };

    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

}
