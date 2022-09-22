#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//More string functions, e.g. strchr(), which searchs for a char in a string and return its pointer(address)

void strFuncChar()//Search for a single element in a string ''
{
    char str[] = "The quick brown fox.";
    char srch = 'q';
    char *pointerGot_char = NULL;
    pointerGot_char = strchr(str,srch);
    printf("The string beggining after the pointer found is:\n%s", pointerGot_char);

}

void func_strchr2() //Search for a sub string inside a string ""
{
    char str[] = "O resultado da empresa foi bom";
    char strsrch[] = "foi ";
    char *pGot = NULL;
    pGot = strstr(str, strsrch);
    printf("The result found is:\n%s", pGot);

}

void tokenizing() //Tokenizing a string
{
    char str[80] = "Hello, welcome - Ny name is - Borges Lagoa";
    char delim[2] = "-";
    char *token;

    token = strtok(str,delim);

    /* Walk through other tokens in the string*/
    while(token != NULL) {
        printf( " %s\n", token);
        token = strtok(NULL,delim);
    }
}

void otherf()
{
    char buf[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("Please type your TOKEN to be analyzed (less than %d letters):", 100);
    scanf("%s", buf);
    int i = 0;
    while(buf[i])
    {
        if(isalpha(buf[i]))
            ++nLetters;
        else if(isdigit(buf[i]))
            ++nDigits;
        else if(ispunct(buf[i]))
            ++nPunct;
        ++i;
    }

    printf("\n Your TOKEN string has %d Letters, %d digits and %d punctuations\n", nLetters, nDigits, nPunct);

}


int main()
{
    printf("Function 01\n");
    strFuncChar();

    printf("\n\n\nFunction 02\n");
    func_strchr2();

    printf("\n\n\nFunction 03\n");
    tokenizing();

    printf("\n\n\nFunction 04\n");
    otherf();

    return 0;
}
