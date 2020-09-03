#include <stdio.h>
#include <math.h>
#include <string.h>

void generateIPs();


int main()
{

    generateIPs(50);

    return 0;
}

void generateIPs(int len){

    int i, j, number[4];
    for( i=0; i<len ; i++ ){

        for(j=0 ; j<3; j++){
            number[j] = rand() % 255 +1;
            printf("%d.", number[j]);
        }
        number[3] = rand() % 255 +1;
        printf("%d", number[3]);

        printf("\n");
    }


}
