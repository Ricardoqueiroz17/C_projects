#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func_IO();
int func_OpenFile();
int func_read_asStrings();

int main()
{
    printf("\nFunction01\n");
    func_IO();
    printf("\n\nFunction02\n\n");
    func_OpenFile();
    printf("\n\nFunction03\n");
    func_read_asStrings();
    return 0;
}

void func_IO()
{
    FILE *pfile = NULL;
    char *filename = "myfile.txt";

    pfile = fopen(filename, "w"); /*Open myfile.txt in "write" mode */
    if(pfile==NULL)
        printf("Failed to open %s.\n", filename);

}

int func_OpenFile()
{
    FILE *fp;
    fp = fopen("file.txt", "r");
    int c;

    if(fp==NULL)
    {
        perror("Error in opening a file");
        return(-1);
    }

    while((c= fgetc(fp)) != EOF) //while we are not in the END OF FILE.
        printf("%c", c);

    fclose(fp); /*Close the file*/
    fp = NULL;

    return 0;

}

int func_read_asStrings()
{
    FILE *fp;
    char str[61];

    fp = fopen("file.txt", "r");

    if(fp==NULL){
        perror("Error in opening file");
        return(-1);
    }

    if(fgets(str, 25, fp)!=NULL){
        /* writing content to stdout*/
        printf("\n%s", str);
    }
    return 0;
}
