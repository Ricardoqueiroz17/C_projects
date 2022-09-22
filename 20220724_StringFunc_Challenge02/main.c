#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_reverse();
void str_bubblesort();


int main()
{
    printf("\n\nFunction 01 -> The reverse of a string array\n---------------------------------------\n");
    str_reverse();

    printf("\n\nFunction 02 -> Bubble sort the string arrays\n---------------------------------------\n");

    str_bubblesort();

    return 0;
};

void str_reverse()
{

    char strinput[200];

    printf("\n\nPrinting the inverse order of a string.\n");
    printf("-------------------------------------------\n");
    printf("Please insert your string:");
    scanf("%s", strinput);

    int lenstr = strlen(strinput);

    for(int i=lenstr;i>=0;i--)
    {
        printf("%c", strinput[i]);
    }
};

//==================================================================================================
void str_bubblesort()
{
    int n;
    int i,j;
    char name[250][50], temp[50];

    printf("Please enter the number of arrays to be sorted:");
    scanf("%d", &n);

    printf("\nInput all the %d strings: \n", n);

    for(i=1;i<=n;++i)
    {
        printf("\n string i = %d \n", i);
        scanf("%s", name[i]);
    }

    for(i=1;i<=n;i++)
        for(j=0;j<=n-i;j++)
    {
        if(strcmp(name[j],name[j+1])>0)
        {
            strncpy(temp,name[j+1],sizeof(temp)-1);
            strncpy(name[j+1],name[j],sizeof(name[j+1])-1);
            strncpy(name[j],temp,sizeof(name[j])-1);
        }
    }

    printf("\nThe strings appear after sorting:\n");
    for(i=0;i<=n;i++)
    {
        printf("%s\n", name[i]);
    }

}
