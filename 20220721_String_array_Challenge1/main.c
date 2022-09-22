#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> //Used in the third function

/* Notice that I declare the name of functions first, so I can
   insert all of them after the "main" function. */

int func_len(const char s_array[]);
void func_concat(char result[], const char str1[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);

int main()
{
    printf("\n\n-------------------------\nFunction 01: length of a string.\n-------------------------\n\n");
    const char word1[] = "Okokok"; //Using "const" makes the char unchangeable
    const char word2[] = "Whatsthestory"; //Const makes the word unchangeable
    const char word3[] = "MorningGlory";

    printf("%d, %d, %d", func_len(word1), func_len(word2), func_len(word3));

    printf("\n\n-------------------------\nFunction 02: concat two strings.\n-------------------------\n\n");
    char str1[100];
    char str2[100];
    char result[200];
    printf("Please insert your first string:");
    scanf("%s", str1);
    printf("\nPlease insert your second string:");
    scanf("%s", str2);
    func_concat(result,str1,str2);
    printf("%s", result);

    printf("\n\n-------------------------\nFunction 03: bool - two strings are equal or not.\n-------------------------\n\n");
    const char s1[100];
    const char s2[100];
    printf("Please insert your first string:");
    scanf("%s", s1);
    printf("\nPlease insert your second string:");
    scanf("%s", s2);
    func_concat(result,str1,str2);
    printf("\n%d", equalStrings(s1, s2));
    printf("\n%d", equalStrings("Jason", "Jason"));



    return 0;
}

//============================================================================================================================================================
int func_len(const char s_array[]) //Return the lenght of a String (remember that string is an ARRAY)
{
    int count=0;
    while (s_array[count] != '\0')
        ++count;

    return count;
}
//============================================================================================================================
void func_concat(char result[], const char str1[], const char str2[])
{
    int i, j;
    for(i=0; str1[i]!='\0'; ++i)
        result[i] = str1[i];
    for(j=0;str2[j]!='\0';++j)
        result[i+j] = str2[j];

    result[i+j] = '\0';
}
//============================================================================================================================
bool equalStrings(const char s1[], const char s2[])
{
    bool b1 = false;
    bool b2 = false;
    int i=0;
    int j = 0;

    while(s1[i])
    {
        if(s1[i]==s2[i])
            b1 = true;
        else
            b1 = false;
        ++i;
    };

    while(s2[j])
    {
        if(s2[j]==s1[j])
            b2 = true;
        else
            b2 = false;
        ++j;
    };

    if (b1 == b2)
        return b1;
    else
        return false;

}


