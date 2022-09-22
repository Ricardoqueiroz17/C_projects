#include <stdio.h>
#include <stdlib.h>

int main()
{
    _Bool a = 0;
    _Bool b = 0;
    _Bool result;

    result = a&&b; /* AND OPERATOR */
    printf ("AND OPERATOR && \n %d  \n", result);

    result = a||b; /* OR OPERATOR */
    printf ("OR OPERATOR II:\n %d \n", result);

    result = !a; /* DIFFERENT OPERATOR */
    printf ("DIFFERENT OPERATOR =! :\n %d \n", result);

}
