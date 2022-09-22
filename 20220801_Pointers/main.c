#include <stdio.h>
#include <stdlib.h>

void func_pointers();
void func_pointer2();
int func03();
int func04();
int func05();

int main()
{
    func_pointers();
    func_pointer2();
    func03();
    func04();
    func05();

    return 0;
}

void func_pointers()
{
    int number = 15;
    int *pointer = &number;
    int result;

    result = *pointer*5;
    printf("\n============\nFunction 01:\n============\
\nFunc 01 result = %d\n\n", result);
}

void func_pointer2()
{
    int num = 12;
    int *pointer2 = &num;
    int result;
    result = *pointer2 * 2;
    printf("\n============\nFunction 02:\n============\
Func 02 result = %d\n", result);
}

int func03()
{
    int count=10,x;
    int *int_pointer;

    int_pointer = &count;
    x = *int_pointer;

    printf("\n============\nFunction 03:\n============\n\n\
Count = %i, x =%i\n", count,x);

    return 0;
}

int func04()
{
    int numb = 1223;
    int *pointerf = NULL;
    pointerf = &numb;

    printf("\n============\nFunction 04:\n============\n\
Address of a pointer: %p\n", pointerf);

    printf("\nOther way of showing the address of a pointer: %p\n", &numb);
    return 0;
}

int func05()
{
    int number=0;
    int *pnumber = NULL;

    number = 10;
    printf("\n============\nFunction 05:\n============\n\
The number's address: %p\n", &number);
    printf("\nThe number's value: %d\n\n", number);

    //Now we change the address of "number" variable
    pnumber = &number;

    printf("\npnumber's address: %p\n", (void*)&pnumber);
    printf("pnumber's size: %zd bytes\n", sizeof(pnumber));
    printf("pnumber's value: %p\n", pnumber);
    printf("value pointed to: %d\n", *pnumber);

    return 0;
}
