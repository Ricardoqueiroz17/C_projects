#include <stdio.h>
#include <stdlib.h>

/* Go to Projects -> Set program arguments and define the Program Arguments*/

/* argc is the count of variables that are passed
argv is the vector of arguments */

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the program name: %s", argument2);

    return 0;
}
