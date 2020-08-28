
#include <stdio.h>
#include <math.h>

int throwDice(int faces);

int main()
{

    printf("How many times do you want to throw the dice? \n");
    int n;
    scanf("%d", &n);

    int i;
    for( i=0; i<n; i++ ){

        throwDice(6);

    }

    throwDice(10);
    throwDice(12);
    throwDice(4);

    return 0;
}

int throwDice(int faces){

    int number = rand()%faces + 1;

    printf("%d \n", number);

    return number;

}