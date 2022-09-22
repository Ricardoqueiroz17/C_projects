#include <stdio.h>
#include <stdlib.h>

//More training with pointers.
//To debug the code and see the results line by line: Debug -> Debugging windows -> Watches.

void pointersf();

int main(void)
{
    pointersf();
    return 0;
}

void pointersf()
{
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1;
    *pnum = 2L;
    ++num2;
    num2 += *pnum;

    pnum = &num2;
    ++*pnum;

    printf("In the end: num1=%ld num2 = %ld *pnum=%ld *pnum+num2 = %ld\n",
            num1, num2, *pnum, *pnum+num2);

}
