#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void convstr()
{
    char text[100];
    char substr[40];

    printf("\nEnter your text:\n");
    scanf("%s", text);

    printf("Enter the substring to be found:\n");
    scanf("%s", substr);

    printf("The first string entered: %s\n", text);
    printf("The second string entered: %s\n", substr);

    //Converting all to upper case, since the strstr is case sensitive
    int i;
    for(i=0  ;(text[i]=(char)toupper(text[i]))!='\0'  ; ++i);
    for(i=0; (substr[i]=(char)toupper(substr[i]))!='\0'   ;   ++i);

    printf("The substring %s found in the text.\n", ((strstr(text,substr) != NULL) ? "was": "was not"));
}

void convertnumb()
{
    double value = 0;
    char str[] = "49.0 2.5 1.26";
    //char str[] = "Sambacriolodoido"; //Exemplo de string que nao pode ser convertida
    char *pstr = str; //Declare a pointer, and put the str string in this pointer
    char *ptr = NULL;

    while(true)
    {
        value = strtod(pstr, &ptr);
        if(pstr == ptr)
        {
            break;
        }

        else
        {
            printf(" %f", value);
            pstr = ptr;
        }
    }


}


int main()
{
    convstr();
    printf("\n\n\nFunction 02\n");
    convertnumb();
    return 0;
}
