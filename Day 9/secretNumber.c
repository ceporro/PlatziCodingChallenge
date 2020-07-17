#include <stdio.h>
#include <math.h>

int main()
{

    int secretN = rand() % 11;
    int n;
    int tries = 0;

    do{

        printf("Try to guess the secret Number! \n");
        scanf("%d", &n);
        
        if( n == secretN )
        {
            printf("Congratulations! You win! \n");
        } 
        else if( n > secretN)
        {
            printf("The secret number is smaller than your number. Try again! \n" );
            tries++;
        }
        else
        {
            printf("The secret number is higher than your number. Try again! \n" );
            tries++;
        }

    } while( n != secretN );



    return 0;
}