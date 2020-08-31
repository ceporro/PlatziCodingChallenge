#include <stdio.h>
#include <math.h>

int successBinarySearch(int numbers);

int main()
{

    int tries = successBinarySearch(100);

    if( tries > 5 )
        printf("You will probably lose \n");
    else if( tries == 5 )
        printf("You won't win, but you won't lose \n");
    else
        printf("You will probably win! \n");


    return 0;
}

int successBinarySearch(int numbers){

    int n = numbers;
    int tries = 0;

    while (n != 1) {

        if( n%2 == 0 )
            n /= 2;
        else
            n = n/2 - 0.5;
        tries++;

    }

    printf("It will take you %d attemps until you guess the number \n", tries);

    return tries;

}