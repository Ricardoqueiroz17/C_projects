/* The code calculates the perimeter and the area of a rectangle
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float w = 32.3;
    float h = 15.44345;
    float perim = 2*w + 2*h;
    float area = w * h;

    printf("Estou apenas treinando %.2f\n", perim);
    printf("For a rectange of width %.2f and height \
%.2f\n", w,h);
    printf("The perimeter is = %.2f\n", perim);
    printf("The area is = %.2f\n", area);
    printf("NAO ESQUECA DO ;");

    return 0;
}
