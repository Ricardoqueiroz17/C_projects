#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Some functions for strings:
strlen() -> lenght of a string strlen() strlen() strlen()
strcpy() -> copy a string strcpy() strcpy() strcpy()*/

int lenghtFuncStr()
{
    printf(
"=====================================\n \
FUNCTION 01 -> strlen()\n \
=====================================\n");


    char myString[] = "Go chehcehcehce";
    printf("The lenght of the string is %zu\n", strlen(myString)); // Notice that we use %zu to retrieve strlen. It will warn you if ou try to use %d

    return 0;
}

void lenFunc2()
{

       printf(
"=====================================\n \
FUNCTION 02 -> strlen()\n \
=====================================\n");

   char myStr[] = "You are my sunshine yeah.";
   printf("The length of the string is %zu\n", strlen(myStr));
}

void cpyFunc()
{
           printf(
"=====================================\n \
FUNCTION 03 -> strcpy()\n \
=====================================\n");


    char src[50], dest[50];

    strcpy(src, "This is source");
    strcpy(dest, "This is destination");
    printf("str1: %s\n", src);
    printf("str2: %s\n", dest);
}



void cpyFunc2()
{
               printf(
"=====================================\n \
FUNCTION 04 -> strcopy()\n \
=====================================\n");

    char myString[] = "Shablau!";
    char temp[50];
    strncpy(temp,myString,sizeof(temp)-1);

    printf("The string copied is: %s \n", temp);

}

void concatFunc()
{
               printf(
"=====================================\n \
FUNCTION 04 -> strcat() - Concatenate\n \
=====================================\n");

    char myString[] = "Second str to be concat";
    char concatStr[30];
    printf("Please insert the string to be concatenated (with strcat()):\n");
    scanf("%s", concatStr); //Notice that you don`t need the % preceding the variable concatStr
    printf("\nThe string \"%s\" concatenated with the other string \"%s\" is ::::\n", myString, concatStr);
    printf("%s", strcat(concatStr, myString));
}

void concatFunc2() //Using strncat instead of strcat: strncat allows you to specify the length of the string to be concatenated
{
                  printf(
"=====================================\n \
FUNCTION 05 -> strcat() - Concatenate\n \
=====================================\n");

    char src[50], dest[50];
    strcpy(src, "This is the source.");
    strcpy(dest, "This is the destination");
    strncat(dest, src, 19);
    printf("\nFinal destination string: |%s|\n", dest);
}

void compareStrFunc() /* strcmp() -> if two strings are equal, the function strcmp returns 0: if its less, returns -1. If its greater, returns 1*/
{
                  printf(
"=====================================\n \
FUNCTION 05 -> strcmp() -> compare strings\n \
=====================================\n");

    printf("strcmp(\"A\",\"A\") is ");
    printf("%d\n", strcmp("A","A"));

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n",strcmp("A", "B"));

    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));

}

void compareStrFunc2() /* strncmp() -> with strncmp, you just compare the first X elements of strings */
{
    if (strncmp("astronomy","astro",5) == 0)
    {
        printf("Found:astronomy");
    }

    if(strncmp("astounding", "astro",5) == 0)
    {
        printf("Found: astounding");
    }
}

int main()
{
    lenghtFuncStr(); //Return the length of a string
    lenFunc2();
    cpyFunc(); //Copy string
    cpyFunc2();
    concatFunc();
    concatFunc2();
    compareStrFunc();
    compareStrFunc2();
    return 0;
}
