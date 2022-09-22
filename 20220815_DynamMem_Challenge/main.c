#include <stdio.h>
#include <stdlib.h> //This is were Malloc is.
#include <string.h>
#define MAXLIMIT 20 // The limit of size of the string character

//Always remember to RELEASE THE MEMORY AFTER ITS USED.
/*Always remeber to release the memory after its usage*/

void func_mem();
void func_mem2();

int main()
{
    func_mem();
    printf("\n\nFunction 02\n");
    func_mem2();

    return 0;
}

void func_mem()
{
    char *pointer = (char*)malloc(MAXLIMIT*sizeof(char));
    printf("\nPlease type your string:\n");
    fgets(pointer,MAXLIMIT,stdin);
    printf("%s", pointer);

    free(pointer);

}

void func_mem2()
{
    int size;
    char *text = NULL;
    printf("\nPlease define the size of your memory alloc:\n");
    scanf("%d", &size);

    text = (char*)malloc(size*sizeof(char));



    if(text != NULL) //The same as if(text != NULL) WE ARE VERIFYING IF THE VALUE ADDRESS IS != FORM NULL, NOT ITS POINTER
    {
        printf("\nPlease type your string:\n");
        scanf(" ");
        gets(text);
        printf("\nThe input text is : %s\n", text);
        free(text);
    }
}
