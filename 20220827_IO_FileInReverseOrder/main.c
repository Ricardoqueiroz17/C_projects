//Reverse order of file: print the characters of a file in REVERSE ORDER.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "myfile.txt"

int fReverse();

int main()
{
    fReverse();
    return 0;
}

int fReverse()
{
    FILE *fp=NULL;
    int len;
    int count = 0;

    fp = fopen(FILENAME, "r");

    if(fp==NULL){
        printf("Error in opening the file.");
        return(-1);
    }

    fseek(fp,0,SEEK_END); //Make the fp pointer to point to the END of the file
    len = ftell(fp); //ftell gets the distance from the beggining of the document till the point where the pointer fp is pointing to

    printf("size of doc: %d\n", len);

    printf("\nThe inverse order of the file is:\n");
    for(count=1;count<=len;count++){
        fseek(fp,-count,SEEK_END);
        printf("%c", fgetc(fp));

    }

    printf("\n");

    fclose(fp);
    fp = NULL;

    return 0;
}
