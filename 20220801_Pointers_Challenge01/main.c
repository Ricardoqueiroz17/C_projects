#include <stdio.h>
#include <stdlib.h>

void func01();
int func02();

int main()
{
    func01();
    func02();
    return 0;
}

void func01()
{
    int var = 14;
    int *pointer1 = NULL;

    pointer1 = &var;

    printf("\nA pointer's value is different from a pointer's address\n");
    printf("\nPointer address = %p\n", (void*)&pointer1);
    printf("\nPointer's value (is a memory val) = %p\n", pointer1);
    printf("\nPointer is pointed to = %d\n", *pointer1);

}

int func02()
{
    int number = 10;
    int *pointer1 = NULL;

   //Declaring a value for the pointer1
   pointer1 = &number;

    printf("\n======================================\n\
Func 02\n\
======================================\n\
This is the same function of above. Is just to fix the concepts \n\n\
Important: a pointer's address is different from a pointer's value\n");
    printf("\nThe address of number is:%p\n", &number);
    printf("\nThe pointer's address:%p\n", &pointer1);
    printf("\nThe pointer's value: %p\n", pointer1);
    printf("\nThe pointer is pointing to:%d\n", *pointer1);
    return 0;
}


