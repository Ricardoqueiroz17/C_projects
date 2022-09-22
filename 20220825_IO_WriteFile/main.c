#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fWrite();
int fWriteStr();
void fWritefprintf();

int main()
{
    fWrite();
    fWriteStr();
    fWritefprintf();
    return 0;
}

int fWrite()
{
    FILE *fp = NULL;
    int ch;

    fp = fopen("file.txt", "w+");

    for(ch=30;ch<=100;++ch){
        fputc(ch,fp);
    }

    fclose(fp);

    return 0;
}

int fWriteStr()
{
    FILE *filePointer = NULL;

    filePointer = fopen("fileStr.txt", "w+");
    fputs("I am very happy to be here!", filePointer);
    fputs("The funk phenomena.", filePointer);

    fclose(filePointer);

    return 0;

}

void fWritefprintf()
{
    FILE *fp=NULL;

    fp = fopen("file3.txt", "w+");

    if(fp!=NULL)
        fprintf(fp, "%s %s %s %s %d", "Hi", "my", "ID", "is", 555);

    fclose(fp);

}
