#include <stdio.h>
#include <stdlib.h>

int myglobal = 2000; //global variable

int main()
{
    int myLocalMain = 0;
    printf("My global variable is: %d\n", myglobal);
    return 0;
}

void myFunction()
{
    int x;
    printf("My global variable is: %d\n", myglobal);
}
