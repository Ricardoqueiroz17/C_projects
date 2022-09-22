//POSITIONS in file: how to go to certain positions in the file: go to its END, or go somewhere within the doc

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fPosition();
void fSeek();

int main()
{
    fPosition();
    fSeek();
    return 0;
}

int fPosition()
{
    FILE *fp=NULL;
    int len;

    fp = fopen("file.txt", "r");

    if(fp==NULL)
    {
        perror("Error in opening the file!");
        return(-1);
    }

    fseek(fp,0,SEEK_END); //Make the fp pointer to point to the END of the file

    len = ftell(fp);
    fclose(fp);

    printf("The total size of file.txt is %d bytes\n", len);

    return 0;
}

void fSeek()
{
    FILE *fp=NULL;

    fp = fopen("file.txt", "w+");
    fputs("This is Ricardo.",fp);

    fseek(fp,7,SEEK_SET);//Will move 7 bytes from position set by SEEK_SET
    int len = ftell(fp);
    printf("\nNow the pointer points to:%d", len);
    fputs("How are you?",fp);
    fclose(fp);
}
