#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


char * requestNumber(int digits);
char * generateNumber(int digits);
void cows_bulls();



int main()
{

    cows_bulls();
    
    return 0;
}



char * requestNumber(int digits){
    
    char userInput[digits];
    printf("Type a %d digits number: \n", digits);
    scanf("%s", &userInput);

    while (atoi(userInput) == 0 || strlen(userInput) != digits)
    {
        printf("Invalid input \n");
        scanf("%s", &userInput);

    }

    char * input = userInput;

    return input;

}


char * generateNumber(int digits){

    char randomNumber[digits];

    int i;
    for(i=0; i<digits; i++){

        int number = rand() % 10;

        randomNumber[i] = number + '0';
    
    }

    // printf("random = %s \n" , randomNumber);

    char * random = randomNumber;

    return random;

}


void cows_bulls(){

    int cows = 0;
    int bulls = 0;
    int thisLapCows;

    char userNumber[4], randomNumber[4];

    while (cows < 10)
    {
        char plural = 's';
        strcpy(randomNumber, generateNumber(4));
        strcpy(userNumber, requestNumber(4));

        thisLapCows = 0;

        int i;
        for( i=0; i<4; i++ ){

            if( randomNumber[i] == userNumber[i] ){
                cows++;
                thisLapCows++;
            }

        }

        if( thisLapCows == 0 )
            bulls++;
        else if( thisLapCows == 1 )
            plural = '\0';
        

        printf("You have guessed %d digit%c! \n", thisLapCows, plural);
        printf("cows = %d, bulls = %d \n", cows, bulls);

    }

}