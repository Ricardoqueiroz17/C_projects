#include <stdio.h>

int main()
{
/* I will create two variables, one string and one number*/

char str[100]; //String
int i;         //Number
double x;

printf("Enter a value:");
//scanf("%s %d", str, &i); // I have to type two variables, one str and one int
//scanf("%d", &i); // I have to type two variables, one str and one int
scanf("%s", str); // I have to type two variables, one str and one int


//printf("\n You entered: %s%d",str,i);
printf("\nYou entered: %s\n", str);

return 0;
}
