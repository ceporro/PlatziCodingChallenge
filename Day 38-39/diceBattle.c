#include <stdio.h>
#include <math.h>

int * throwDice(int faces, int times);
void diceBattle(int rolls);
int arrayTotal(int * array, int len);

int main()
{

    diceBattle(2);
    diceBattle(5);
    diceBattle(8);
    diceBattle(10);

    return 0;

}

int * throwDice(int faces, int times){

    int rolls[times];

    int i;
    for( i=0; i<times; i++){
        int roll = rand()%faces + 1;
        rolls[i] = roll;
        printf("%d, ", rolls[i]);
    }
    printf("\n");

    int * rolls_ = rolls;
    return rolls_;

}

int arrayTotal(int * array, int len){

    int total = 0;

    int i;
    for( i=0; i<len; i++ ){
        total += array[i];
    }

    return total;

}

void diceBattle(int rolls){

    int * rolls1 = throwDice(6, rolls);
    int player1 = arrayTotal(rolls1, rolls);

    int * rolls2 = throwDice(6, rolls);
    int player2 = arrayTotal(rolls2, rolls);
    
    int * rolls3 = throwDice(6, rolls); 
    int player3 = arrayTotal(rolls3, rolls);

    printf("%d - %d - %d \n", player1, player2, player3);
    
    if( player1 == player2 && player1 == player3 )
        printf("Triple tie! \n");
    else if( player1 == player2 && player1 > player3 )
        printf("Player 3 lose! \n");
    else if( player1 == player3 && player1 > player2 )
        printf("Player 2 lose! \n");
    else if( player3 == player2 && player3 > player1)
        printf("Player 1 lose! \n");
    else if( player1 > player2 && player1 > player3 )
        printf("Player 1 win! \n");
    else if( player2 > player3 && player2 > player1 )
        printf("Player 2 win! \n");
    else if( player3 > player2 && player3 > player1 )
        printf("Player 3 win! \n");

}