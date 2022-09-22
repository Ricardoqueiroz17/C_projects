#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLIMITPOINTER 20 /* Defines max size of the pointer memory allocation */

struct item{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readitem(struct item *pointerItem);
void printitem(struct item *pointerItem);

int main()
{
    struct item itm;
    struct item *pointerItem;
    pointerItem = &itm;
    pointerItem->itemName = (char*)malloc(MAXLIMITPOINTER*sizeof(char));
    if(pointerItem == NULL)
        exit(-1);

    readitem(pointerItem);
    printitem(pointerItem);
    free(pointerItem->itemName);
    return 0;
}

void readitem(struct item *pointerItem)
{

    printf("Function readitem\n");

    printf("Type the item name:\n");
    scanf("%s", pointerItem->itemName);

    printf("Type the quantity:\n");
    scanf("%d", &pointerItem->quantity);

    printf("Type the price:\n");
    scanf("%f", &pointerItem->price);

    pointerItem->amount = (float)pointerItem->price * pointerItem->quantity;

}

void printitem(struct item *pointerItem)
{
    printf("Product Summary\nItem Name: %s\n", pointerItem->itemName);
    printf("Qty: %i\n", pointerItem->quantity);
    printf("Price: %f\n", pointerItem->price);
    printf("Total Amount: %f\n", pointerItem->amount);

}
