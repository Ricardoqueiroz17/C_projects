#include <stdio.h>
#include <stdlib.h>

int func();

int main()
{
    func();
    return 0;
}

int func()
{
    int arr[] = {1,2,3};
    int *valuesPtr;

    valuesPtr = &arr[0];

    ++valuesPtr;
    ++valuesPtr;

    printf("%d", *valuesPtr);

    return 0;
}
