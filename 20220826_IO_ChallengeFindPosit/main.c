#include <stdio.h>
#include <stdlib.h> //This is the library that deals if FILE
#include <string.h>

#define FILENAME "myfile.txt"

int fNumbLines();
int fnumbLines2();

int main()
{
    fNumbLines();
    fnumbLines2();
    return 0;
}

int fNumbLines()
{
    FILE *fp=NULL;
    int count=0;

    fp = fopen(FILENAME, "r");

    if(fp==NULL){
        printf("Error in opening the file!\n");
        return(-1);
                }

    do{
        char c = fgetc(fp);
    if(feof(fp))
        break;
    //printf("%c",c);
    if(c == '\n')
        count++;

    }while(1);

    count++;//Need to add 1 more count to represent the last line

    printf("\nThe file has %d lines\n", count);

    fclose(fp);

    return(count);
}

int fnumbLines2()
{
    FILE *fp=NULL;
    char ch;
    int count=0;

    fp = fopen(FILENAME, "r");

    if(fp==NULL){
        printf("Error in opening the file!");
        return(-1);
    }

    while((ch=fgetc(fp))!= EOF){
        if(ch=='\n')
            count++;
    }

    fclose(fp);
    fp = NULL;

    count++; //Should add 1 more line to represent the last one

    printf("\n\nFunction 02\n The file has %d lines\n", count);
    return 0;
}
