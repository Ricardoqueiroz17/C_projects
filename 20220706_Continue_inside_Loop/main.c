#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Day{Monday, Tuesday, Wednesday, Thursday,
             Friday, Saturday, Sunday};

    for(enum Day d = Monday; d <= Sunday; ++d)
    {
        if(d == Wednesday)
            continue;   //Skips the loop when reaches this condition

        printf("It is not Wednesday!\n");
    }

    return 0;
}
