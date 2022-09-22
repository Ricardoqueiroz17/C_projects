#include <stdio.h>
#include <stdlib.h> // This is the library where the malloc, calloc, realloc are.
#include <string.h>

//You should always release the memory that you allocated before it is used

void reallocExample();
void DynMalloc();

int main()

{
    reallocExample();
    return 0;
}

void DynMalloc()
{
    int *pNumber = (int*)malloc(25*sizeof(int)); /* Assigning memory size based on the byte's size of an int variable. */
    int *pNumberCalloc = (int*)calloc(75, sizeof(int)); //calloc
}

void reallocExample()
{
    char *str = NULL; //Hence we created a pointer variable but it still got NO MEMORY ALLOCATED
    str = (char*)calloc(15,sizeof(char));
    strcpy(str,"Jason");
    printf("String = %s,   Address = %p\n", str, str);

    str = (char*)realloc(str, 25*sizeof(char));
    strcat(str, ".com");
    printf("String = %s,   Address = %p\n", str, str);

    free(str); // Its very important to release the memory after you use it
}
