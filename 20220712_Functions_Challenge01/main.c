#include <stdio.h>
#include <stdlib.h>

/* Challenge: write three different functions */

//==========First FUNCTION - Greatest Common Divisor of two positive integers====================================
int gcd(int a, int b)
{
    if(a<0 || b<0)
        printf("Error! The numbers must be non negative");

    if(a==b)
        return a;

    int fa=a;
    int fb=b;

    while(fa != fb && fa > 0 && fb > 0)
    {
        if(fa<fb)
            fb = fb-fa;
        else
            fa = fa-fb;
    }

    int gcd = fa;

    return gcd;
}
//==========SECOND FUNCTION - ABSOLUTE VALUE OF A NUMBER====================================
float absolutev(float a)
{
    if (a<0)
        return -1 * a;
    else
        return a;
}
//==========THIRD FUNCTION - SQUARE ROOT====================================
float sqr_root(float d)
{
    const float epsilon = 0.00001;
    float guess = 1.0;
    if(d<0)
    {
        printf("Negative argument to squareRoot.\n");
        return -1.0;
    }

    while (absolutev (guess*guess - d) >= epsilon)
        guess = (d / guess + guess) /2.0;
    return guess;

}

//==========MAIN FUNCTION====================================
int main()
{
/*=============Main function - First part - GCD===========================================*/
    int a,b,result;
    printf("-------------------\nGCD of two numbers.\n-------------------\nPlease insert the first number:\n");
    scanf("%d", &a);
    if(absolutev(a)!=a)
        printf("Error! Please type a positive number!");
    printf("Please insert the second number:\n");
    scanf("%d", &b);
    if(absolutev(b)!=b)
        printf("Error! Please type a positive number!");

    result = gcd(a,b);
    printf("The GCD of %d and %d is = %d\n", a,b,result);

/*=============Main function - Second part - Absolute value===========================================*/
    float c;
    printf("-------------------\nAbsolute value of a number.\n-------------------\nPlease insert the number:\n");
    scanf("%f", &c); //Don't forget the "&" sign before c & & & & &
    float result2 = absolutev(c);
    printf("The absolute number of %f is = %f\n", c, result2);

/*=============Main function - Third part - Square root==========================================================*/
    float d;
    printf("-------------------\nSqr Root of number.\n-------------------\nPlease insert the number:\n");
    scanf("%f", &d); //Don't forget the "&" sign before d & & & & &
    float result3 = sqr_root(d);
    printf("The absolute number of %f is = %f\n", d, result3);


    return 0;


}
