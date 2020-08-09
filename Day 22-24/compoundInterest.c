#include <stdio.h>

int initialMoney = 100;
float interes1 = 0.04;
float plus1 = 0;
float interes2 = 0.03;
float plus2 = 0.07;


float calculateFinalMoney(int initial, float interes, float plus, int months);
void compareBanks(int months);

int main(){

    compareBanks(6);
    compareBanks(12);
    compareBanks(24);

    return 0;
}


float calculateFinalMoney(int initial, float interes, float plus, int months){

    float finalMoney = initial;

    int i;
    for( i=0; i<months; i++){
        finalMoney *= 1+interes;
        if(i%11 == 0 && i!=0)
            finalMoney *= 1+plus;
    }

    printf("You will have %f$ in %d months\n", finalMoney, months);

    return finalMoney;

}

void compareBanks(int months){

    float finalMoney1 = calculateFinalMoney( initialMoney, interes1, plus1, months);
    float finalMoney2 = calculateFinalMoney( initialMoney, interes2, plus2, months);

    if( finalMoney1 > finalMoney2 )
        printf("In %d months the final money is greater in the bank 1; %f > %f \n", months, finalMoney1, finalMoney2);
    else if( finalMoney1 < finalMoney2 )
        printf("In %d months the final money is greater in the bank 1; %f > %f \n", months, finalMoney2, finalMoney1);

}