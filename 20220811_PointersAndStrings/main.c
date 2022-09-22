#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyString();
int exampleOfCopy();
void copyString2();

int main(void)
{
    printf("================================\nFirst ex of copy string\n=========================================\n");
    char string1[]="A string to be copied.\n";
    char string2[50];

    copyString(string2,string1);

    printf("string copied: %s", string2);

    printf("================================\nSecond ex of copy string\n=========================================\n");
    exampleOfCopy();

    return 0;
}

void copyString(char *to, char *from)
{
    while(*from)
        *to++ = *from++;

    *to = '\0';
}

void copyString2(char *to, char *from) //Is the same as copyString above. This one is just to practice a little more
{
    while(*from)
        *to++ = *from++;

    *to = '\0';
}

int exampleOfCopy(void)
{
    char string1[] = "A string to be copied.";
    char string2[50];

    printf("First, we can see that string2 is (before copy): %s\n", string2);

    copyString2(string2,string1);

    printf("After running the function, string2 is: %s", string2);

    return 0;
}

