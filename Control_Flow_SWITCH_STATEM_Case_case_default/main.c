#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Weekday{Monday, Tuesday, Wednesday,
    Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Saturday;

    switch (today) //Remember the BRACKETS!!!
    {
        case Sunday:
            printf("Today is is weekend!\n");
            break;
        case Saturday:
            printf("Today is weekend and is Saturday!\n");
            break;
        default:
            printf("Today is a weekday bro.");
            break;
    }
    return 0;
}
