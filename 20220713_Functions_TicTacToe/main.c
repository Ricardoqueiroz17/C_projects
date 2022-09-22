#include <stdio.h>
#include <stdlib.h>



// Jogo da velha

//Declarando GLOBAL VARIABLES
char  square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int choice, player;

/*==================FUNCTION=========================== */
/*this func will return:
1 if is game over and some player won
-1 if the game should continue or
0 is its game over and no one won.*/

int checkForWin()
{
    int returnValue;

    if (square[1] == square[2] && square[2] == square[3])
        returnValue = 1;
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;
    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;
    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;
    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;
    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;
    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;
    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[6] != '6' && square[5] != '5' && square[6] != '6' &&
             square[7] != '7' && square[8] != '8' && square[9] != '9')

            returnValue = 0; //Ninguem ganhou
    else

        returnValue = -1; // Se nenhum dos casos acima, continua o jogo

    return returnValue;
};

/*==================FUNCTION=========================== */
/*Function to display the board for each player's move */
void displayBoard()
{
    system("clear"); //Clean the screen, for linux is system("cls")
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X) - Player 2 (O) \n\n\n");

    printf("    |    |   \n");
    printf("  %c |  %c |  %c \n", square[1], square[2], square[3]);
    printf("----|----|----\n");
    printf("    |    |    \n");
    printf("  %c |  %c |  %c \n", square[4], square[5], square[6]);
    printf("----|----|----\n");
    printf("    |    |    \n");
    printf("  %c |  %c |  %c \n", square[7], square[8], square[9]);
    printf("    |    |    \n");

};
/*==================FUNCTION=========================== */
void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;

    else if (choice == 2 && square[2] == '2')
        square[2] = mark;

    else if (choice == 3 && square[3] == '3')
        square[3] = mark;

    else if (choice == 4 && square[4] == '4')
        square[4] = mark;

    else if (choice == 5 && square[5] == '5')
        square[5] = mark;

    else if (choice == 6 && square[6] == '6')
        square[6] = mark;

    else if (choice == 7 && square[7] == '7')
        square[7] = mark;

    else if (choice == 8 && square[8] == '8')
        square[8] = mark;

    else if (choice == 9 && square[9] == '9')
        square[9] = mark;

    else
    {
        printf("Incorrect Move! Please select a move between 1 - 9.\n   ");
        player--; // Came back to previous player for them to play again
        getchar(); // getch PAUSES the program (forces to press the enter button) User will have to return
    }

};

/*==================FUNCTION=========================== */
int main()
{
    int  gameStatus;
    char mark;
    player = 1;

    do
    {
        displayBoard();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        markBoard(mark);
        gameStatus = checkForWin();

        player++;

    }while(gameStatus == -1);

    if (gameStatus == 1)
        printf("===> FINISH! PLAYER %d WIN!", --player);

    else
        printf("!!!***DRAW****!!!");

    return 0;
}
