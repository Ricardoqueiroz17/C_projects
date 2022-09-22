#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The memory size of a int is: %zd bytes\n", sizeof(int));
    printf("The memory size of a double is: %zd bytes\n", sizeof(double));
    printf("The memory size of a float is: %zd bytes \n", sizeof(float));
    printf("The memory size of a char is: %zd bytes \n", sizeof(char));
    printf("The memory size of a long is: %zd bytes \n", sizeof(long));
    printf("The memory size of a short is: %zd bytes \n", sizeof(short));
    printf("The memory size of a long double is: %zd bytes \n", sizeof(long double ));

    return 0;
}
