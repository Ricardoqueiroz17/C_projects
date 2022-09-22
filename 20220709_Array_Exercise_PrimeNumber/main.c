#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int primes[50] = {2,3}; //Just need 50 because just odd numbers can be prime
    int index=2; //Index to start inserting new elements in array1
    int p;
    int i;

    bool isPrime;

    for (p = 5;p <= 100;p = p + 2) //just odd numbers can be prime
    {
        isPrime = true;

        for (i=1; isPrime && p / primes[i] >= primes[i];++i)
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[index] = p;
            ++index;
        }
    }

    for (i = 0; i<= index; ++i)
        printf("%i ", primes[i]);

    printf("\n");
    return 0;

}
