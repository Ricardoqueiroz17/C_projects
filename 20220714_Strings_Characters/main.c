#include <stdio.h>
#include <stdlib.h>

//C doesn't has special variable for strings!!
//string in C are stored in an array of type char!!

void funcString() //Function to work with examples of strings. This funct will be called in main funct
{
  printf("\n\n======================\nNew Function: Allow the user to write a string\n==================\n");
  char stringPrint[150];
  printf("Hi all. Write your message in at max 150 chars:\n");
  scanf("%s", &stringPrint);

  printf("Your message is: %s\n", stringPrint);
};

void funct2() //Counts the number of elements in a string
{
  printf("\n\n======================\nNew Function: count the lenght of strings\n==================\n");
  char str1[] = "To be or not to be.";
  char str2[] = "That is the question.";
  unsigned count = 0;

  while (str1[count] != '\0')
    ++ count;
  printf("The lenght of the string \" %s \" is %d.\n", str1, count);

  count = 0;
  while (str2[count] != '\0')
    ++count;

  printf("The size of string 2 \" %s \" is %d.\n", str2, count);
};

int main()
{
    /*Declaring char */
    char x = 'x'; //char variable has to be in SINGLE QUOTES
    char plusSign = '+'; //Another example of char var

/* =============================================================================================*/

    /*Declaring STRINGS */
    char firstString[10] = {'H','e','l','l','o'}; //Notice that we are using single quotes
    //Another easy way to declare strings
    char myString[] = {"Hello"}; //Notice that now we are using double quotes

    printf("Exemplo para usar \"quotations\" dentro de uma string.\n");

    printf("When u want to print a string, use s after percentageAdd The string is: %s\n", myString);

/*=========== Calling other functions ======================*/

    funcString();

    funct2();

    return 0;
}
