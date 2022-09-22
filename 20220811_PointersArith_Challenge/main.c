#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lengthStringPointers(char *string1);
int pointchar2(char *string1);

int main()
{
    char stringTest[] = "Cach";
    lengthStringPointers(stringTest);
    char stringTest2[]="1234567";
    pointchar2(stringTest2);

    return 0;
}

void lengthStringPointers(char *string1)
{
    const char *pointBeg = string1;
    int len;

    while(*string1)
        string1++;

    len = string1 - pointBeg;

    printf("\nThe length of the string 1 is = %d", len);
}

int pointchar2(char *string1)
{
    const char *pointbegin = string1;
    while(*string1)
        string1++;

    int res = string1 - pointbegin;
    printf("\nThe length of string 2 is: %d\n", res);

    return res;
}
