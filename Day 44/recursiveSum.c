#include <stdio.h>
#include <math.h>

int recursiveAdd();

int main()
{
    int total = recursiveAdd();
    printf("The total sum is %d \n", total);

    return 0;
}

int recursiveAdd(){


    int number;
    printf("Type a number to sum: \n");
    scanf("%d", &number);

    if( number != 0 )
        return number + recursiveAdd();
    else
        return number;
    
}