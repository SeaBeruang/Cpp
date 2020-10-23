#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int Rock=1;
	int Paper=2;
	int Scissor=3;
	int i;
	int player2;
	int player1;
	srand(time(NULL));
	
	{
	printf("Rock Paper Scissors!");
	
	player1 = 1+rand()%3;
	player2 = 1+rand()%3;
	
	switch(player1)
	
	{
    case 1:

        if (player2 == 1)
            printf("\n Player1 : rock, Player2 : rock. The game is tied!\n");
        else if (player2 == 2)
            printf("\nPlayer1 : paper, Player2 : rock. Player1 win!\n");
        else if (player2 == 3)
            printf("\nPlayer1 : scissors, Player2 : rock. Player1 lose!\n");
        break;

    case 2:

        if (player2 == 1)
            printf("\nPlayer1 : rock, Player2 : paper. Player1 lose!\n");
        else if (player2 == 2)
            printf("\nPlayer1 ; paper, Player2 : paper. The game is tied!\n");
        else if (player2 == 3)
            printf("\nPlayer1 : scissors, Player2 : paper. Player1 win!\n");
        break;


    case 3:

        if (player2 == 1)
            printf("\nPlayer1 : rock, Player2 : scissors. Player1 win!\n");
        else if (player2 == 2)
            printf("\nPlayer1 : paper, Player2 : scissors. Player1 lose!\n");
        else if (player2 == 3)
            printf("\nPlayer1 : scissors, Player2 : scissors. The game is tied!\n");
        break;

    default:
        printf("Invalid number, try again");
	
    }
    
    return 0;
}
}
