#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int points1 = 0;
int points2 = 0;

int rockPaperScissors( char player1[10], char player2[10]){

    if( player1 != "Rock" && player1 != "rock" && player1 != "Paper" && player1 !="paper" && player1 !="Scissors" && player1 !="scissors" )
        printf("Invalid movement by player 1! \n");
    else if( player2 != "Rock" && player2 != "rock" && player2 != "Paper" && player2 !="paper" && player2 !="Scissors" && player2 !="scissors" )
        printf("Invalid movement by player 2! \n");
    else if(player1 == player2)
        printf("Tie! \n");
    else
    {
        //console.log('no tie')
        if ( player1 == "Rock" || player1 =="rock" )
        {
                if( player2 == "Paper" || player2 == "paper" )
                {
                    printf("Player 2 wins! \n");
                    points2++;
                }
                else
                {
                    printf("Player 1 wins! \n");
                    points1++;
                }
        }
        if ( player1 == "Paper" || player1 == "paper" )
        {
                if( player2 == "Scissors" || player2 =="scissors" )
                {
                    printf("Player 2 wins! \n" );
                    points2++;
                }
                else
                {
                    printf("Player 1 wins! \n");
                    points1++;
                }
        }
        if ( player1 == "Scissors" || player1 == "scissors" )
        {
                if( player2 == "Rock" ||  player2 == "rock" )
                {
                    printf("Player 2 wins! \n");
                    points2++;
                }
                else
                {
                    printf("Player 1 wins! \n");
                    points1++;
                }
        }

    }

    if(points1 == 3)
    {
        printf("\nPLAYER 1 WINS!!! \n\n");
        points1 = 0;
        points2 = 0;
        return 0;
    }
    else if(points2 == 3)
    {
        printf("\nPLAYER 2 WINS!!! \n\n");
        points1 = 0;
        points2 = 0;
        return 0;
    }

}

int main(int argc, char const *argv[])
{
    
    rockPaperScissors("Rock", "Rock");
    rockPaperScissors("Rock", "Paper");
    rockPaperScissors("Rock", "Scissors");

    rockPaperScissors("Paper", "Rock");
    rockPaperScissors("Paper", "Paper");
    rockPaperScissors("Paper", "Scissors");

    rockPaperScissors("Scissors", "Rock");
    rockPaperScissors("Scissors", "Paper");
    rockPaperScissors("Scissors", "Scissors");
    rockPaperScissors("Scissors", "Paper");
    rockPaperScissors("Scissors", "Paper");
    
    
    return 0;
}
