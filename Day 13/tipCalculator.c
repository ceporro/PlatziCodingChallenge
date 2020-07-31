#include <stdio.h>
#include <math.h>

int main()
{

    int plates;
    printf("Type the number of different plates: \n");
    scanf("%d", &plates);

    int prices[plates];
    int n[plates];

    int i;
    for(i=0; i<plates; i++){

        printf("Type the price of plate %d \n", i+1);
        scanf("%d", &prices[i]);

        printf("Type the unities of plate %d \n", i+1);
        scanf("%d", &n[i]);

    }

    int j;
    int totalPrice = 0;
    int tip;
    for(j=0; j<plates;j++){
        totalPrice += prices[j]*n[j];
    }
    tip = totalPrice*0.1;

    printf("The total price is %d \n", totalPrice);
    printf("The tip is %d! \n", tip);


    return 0;
}
