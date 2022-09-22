#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pointexample();
void longPointerEx();

int main()
{
    pointexample();
    printf("\n Function 02\n");
    longPointerEx();
    return 0;
}

void pointexample()
{
    char multiple[] = "a string";
    char *p = multiple; //Multiple is an array, thus we don't need to use the address of the operator &
    int i;

    //Example of retrieving the memory address (value of the pointer) of one of the elements of the string arrray.
    //printf("%p", &multiple[3]);

    for(i=0;i<strlen(multiple);++i)
    {
        printf("\nmultiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p\n",
               i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
    }

}

void longPointerEx()
{
    long multiple[] =  {15L, 25L, 35L, 45L};
    long *p = multiple; //Multiple is an array, thus we don't need to use the address of the operator "&"
    int i=0;

    for(i=0;i < sizeof(multiple)/sizeof(multiple[0]);++i)//I need to divide over size of multiple[i] because each element has 4 bytes

        printf("address p+%d (&multiple[%d]): %llu    *(p+%d)  value: %li\n", i, i, (unsigned long long)(p+i), i, *(p+i));

    printf("Type long occupies: %d bytes\n", (int)sizeof(long));
}
