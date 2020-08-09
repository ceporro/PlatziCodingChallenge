#include <stdio.h>

int initialMoney = 100;
float interes = 0.04;

float calculateFinalMoney(int initial, float interes, int months);

int main(){

    calculateFinalMoney(initialMoney, interes, 6);
    calculateFinalMoney(initialMoney, interes, 12);
    calculateFinalMoney(initialMoney, interes, 24);

    return 0;
}


float calculateFinalMoney(int initial, float interes, int months){

    float finalMoney = initial;

    int i;
    for( i=0; i<months; i++){
        finalMoney *= 1+interes;
    }

    printf("You will have %f$ in %d months\n", finalMoney, months);

    return finalMoney;

}