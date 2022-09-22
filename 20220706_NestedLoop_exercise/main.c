#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("This is a guessing game!\n\
I have chosen a number between 0 and 20 and you \
must guess it.");

//Generating a random number
time_t t;
srand((unsigned) time(&t));
int randomNumber = rand() %21; //Rand numb should be smaller than 21

int mynum = randomNumber;
int guess;

for(int i=0; i<5; ++i)
{
    printf("You have %d tries left.\n", 5-i);
    printf("Enter a guess:\n");
    scanf("%d", &guess);

if(guess<0 || guess >20)
{
    printf("Number out of range! You should type some \
value between 0 and 20.\n");
    continue;
}

else if(guess < mynum)
{
    printf("Wrong! My number is larger than that.\n");
    continue;
}

else if(guess > mynum)
{
    printf("Wrong! My number is smaller than that.\n");
    continue;
}
else
    {
    printf("Congratulations, you guessed the \
correct number: %d\n", mynum);
    break;
    }

printf("Oh oh, you lose the game!\n");
}

return 0;

}
