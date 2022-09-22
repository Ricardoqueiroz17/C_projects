#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> //library to use islower and isupper functions

#define FILENAME "file.txt"
#define FILETEMP "filetemp.txt"

int fUpperCase();

int main()
{
    fUpperCase();
    return 0;
}

int fUpperCase()
{
    FILE *fp = NULL;
    FILE *tempFile=NULL;
    char c;
    char ch;

    fp = fopen(FILENAME, "r");
    tempFile = fopen(FILETEMP, "w+");

     if (fp==NULL){
        printf("Error in opening file!");
        return(-1);
    }

    if (tempFile == NULL){
        printf("Error in opening temp!");
        return(-1);
    }

    printf("\nThe old file is:\n");

    while((c = fgetc(fp)) != EOF){
        printf("%c", c);
    }

    fclose(fp);
    fopen(FILENAME, "r");

    printf("\n\nTask 2: print only the lower case:\n");

    while((ch=fgetc(fp))!=EOF){
        if(islower(ch)==1){
            printf("%c",ch);
            fputc(ch-32,tempFile);
        }
        else
            fputc(ch,tempFile);
    }

    fclose(fp);
    fclose(tempFile);

    remove(FILENAME);
    rename(FILETEMP,FILENAME);


    FILE *newfp = NULL;
    newfp = fopen(FILENAME,"r"); //redirecting a file to the pointer again
    printf("\n\nThe new file is:\n");
    while((c = fgetc(newfp)) != EOF){
        printf("%c", c);
    }

    return 0;
}
