/* Training to work with Enums types*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company{GOOGLE, FACEBOOK, XEROX,
                 YAHOO, EBAY, MICROSOFT};

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("First company pos: %d", xerox);
    printf("\nSecond company: %d", google);
    printf("\nThird company: %d", ebay);
    return 0;
}
