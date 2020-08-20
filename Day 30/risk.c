#include <stdio.h>
#include <math.h>

void swapNumbers(int * a, int * b);
int * majorToMinor(int * array, int size);
int * throwPlayer1();
int * throwPlayer2();
void battle( int * player1, int * player2, int soldiers1, int soldiers2);

int main()
{

    int soldiers1 = 20;
    int soldiers2 = 20;

    int * player1;
    int * player2;

    // int counter = 10;
    while(soldiers1 > 0 && soldiers2 > 0 /*&& counter>0*/){

        if(soldiers1 <= 0 && soldiers2 > 0)
            printf("Player 1 has loose \n");
        else if(soldiers2 <= 0 && soldiers1 > 0)
            printf("Player 2 has loose \n");
        else if(soldiers2 <= 0 && soldiers1 <= 0)
            printf("Both players haven't got soldiers! \n");
        else{

            player1 = throwPlayer1();
            int newp1[3], j;
            for( j=0; j<3; j++){
                newp1[j] = player1[j];
            } 

            player2 = throwPlayer2();
            int newp2[2], k;
            for( k=0; k<2; k++){
                newp2[k] = player2[k];
            } 

            int i;
            for( i=0; i<2; i++){
            
                if( newp1[i] > newp2[i] )
                    soldiers2--;
                else
                    soldiers1--;

            }
            
            if(soldiers1 <= 0)
                printf("Player 1 lose! \n");
            else
                printf("Player 1 has %d soldiers \n", soldiers1);
            
        
            if(soldiers2 <= 0)
                printf("Player 2 lose! \n");
            else
                printf("Player 2 has %d soldiers \n", soldiers2);

        }
        // counter--;

    }

    return 0;
}

void swapNumbers(int * a, int * b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

int * majorToMinor(int * array, int size){

    int i,j;
    for(i=0; i<size-1; i++){

        for(j=0; j<size-i-1; j++){

            if( array[j+1] > array[j] )
                swapNumbers(&array[j], &array[j+1]);

        }

    }

    int k;
    for( k=0; k<size-1 ; k++){
        printf("%d, ", array[k]);
    }
    printf("%d \n", array[size-1]);
    
    return array;

}

int * throwPlayer1(){

    int player1[3];

    int i;
    for( i=0; i<3; i++){
        player1[i] = rand()%6 + 1;
    }
    
    int * player1or = majorToMinor(player1, 3);

    return player1or;

}

int * throwPlayer2(){

    int player2[2];

    int i;
    for( i=0; i<2; i++){
        player2[i] = rand()%6 + 1;
    }

    int * player2or = majorToMinor(player2, 2);

    return player2or;

}

void battle(int * player1, int * player2, int soldiers1, int soldiers2){

    if(soldiers1 <= 0 && soldiers2 > 0)
        printf("Player 1 has loose \n");
    else if(soldiers2 <= 0 && soldiers1 > 0)
        printf("Player 2 has loose \n");
    else if(soldiers2 <= 0 && soldiers1 <= 0)
        printf("Both players haven't got soldiers! \n");
    else{

        player1 = throwPlayer1();
        int newp1[3], j;
        for( j=0; j<3; j++){
            newp1[j] = player1[j];
        } 

        player2 = throwPlayer2();
        int newp2[2], k;
        for( k=0; k<2; k++){
            newp2[k] = player2[k];
        } 

        int i;
        for( i=0; i<2; i++){
          
            if( newp1[i] > newp2[i] )
                soldiers1--;
            if( newp2[i] > newp1[i] )
                soldiers2--;

        }
        
        if(soldiers1 <= 0)
            printf("Player 1 lose! \n");
        else
            printf("Player 1 has %d soldiers \n", soldiers1);
        
    
        if(soldiers2 <= 0)
            printf("Player 2 lose! \n");
        else
            printf("Player 2 has %d soldiers \n", soldiers2);

    }

}

