#include <stdio.h>
#include <stdlib.h>

/* How to define that your pointer address cannot be modified
   Or, how to define that the value which the pointer points to cannot be modified*/

int pointerConst();

int main()
{
    pointerConst();
    return 0;
}

int pointerConst()
{
    long longNum = 8888L;
    const long *pointerLg = &longNum;

    // I can't declare *pointerLg = 7777L, but I can change the longNum = 123L;
    // I also can change the pointer address;

    printf("Part 01: the pointer value %ld is the constant\n", *pointerLg);

    int count = 43;
    int *const pointerConstAddress = &count; /* The constant is the value of the pointer, which is an ADDRESS*/
    *pointerConstAddress = 5555555;

    printf("\nPart 02: now, the constant is the pointer value, which is an ADDRESS: %p\n", pointerConstAddress);
    // Now, we can change the value doing *pointerConstAddress = X, since we are not changing the value
    // of the pointer but the value where the pointer points to

    /* Turning both constants: 1)pointer value and 2)value where the pointer points to*/
    int item = 25;

    const int *const pointerBothConst = &item;
    printf("\nPart 03: both constants: pointer value \"%p\" and value where points point \"%d\"", pointerBothConst, *pointerBothConst);

    return 0;
}
