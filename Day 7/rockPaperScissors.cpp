#include <iostream>
#include <math.h>

using namespace std;

int points1 = 0;
int points2 = 0;

int rockPaperScissors( string player1, string player2){

    if( player1 != "Rock" && player1 != "rock" && player1 != "Paper" && player1 !="paper" && player1 !="Scissors" && player1 !="scissors" )
        cout <<"Invalid movement by player 1!" << endl;
    else if( player2 != "Rock" && player2 != "rock" && player2 != "Paper" && player2 !="paper" && player2 !="Scissors" && player2 !="scissors" )
        cout <<"Invalid movement by player 2!" << endl;
    else if(player1 == player2)
        cout <<"Tie!" << endl;
    else
    {
        //console.log('no tie')
        if ( player1 == "Rock" || player1 =="rock" )
        {
                if( player2 == "Paper" || player2 == "paper" )
                {
                    cout << "Player 2 wins! "<<endl;
                    points2++;
                }
                else
                {
                    cout << "Player 1 wins! "<<endl;
                    points1++;
                }
        }
        if ( player1 == "Paper" || player1 == "paper" )
        {
                if( player2 == "Scissors" || player2 =="scissors" )
                {
                    cout << "Player 2 wins! "<<endl;
                    points2++;
                }
                else
                {
                    cout << "Player 1 wins! "<<endl;
                    points1++;
                }
        }
        if ( player1 == "Scissors" || player1 == "scissors" )
        {
                if( player2 == "Rock" ||  player2 == "rock" )
                {
                    cout << "Player 2 wins! "<<endl;
                    points2++;
                }
                else
                {
                    cout << "Player 1 wins! "<<endl;
                    points1++;
                }
        }

    }

    if(points1 == 3)
    {
        cout << "PLAYER 1 WINS!!! " << endl << endl;
        points1 = 0;
        points2 = 0;
        return 0;
    }
    else if(points2 == 3)
    {
        cout << "PLAYER 2 WINS!!! " << endl << endl;
        points1 = 0;
        points2 = 0;
        return 0;
    }

}

int main()
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
