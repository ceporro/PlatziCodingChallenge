#include <stdio.h>
#include <math.h>

int array[10] = {1 ,23, 43, 14, 999, 42, -5, -62, 71 , 0};
int len = sizeof(array)/sizeof(array[0]);

void swapNumbers(int * a, int * b);
void minorToMajor(int * array, int size);
void majorToMinor(int * array, int size);

int main()
{
    minorToMajor(array, len);
    majorToMinor(array, len);

    return 0;
}


void swapNumbers(int * a, int * b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

void minorToMajor(int array[], int size){

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
    printf("%d \n ", array[size-1]);
}

void majorToMinor(int * array, int size){

    int i,j;
    for(i=0; i<size-1; i++){

        for(j=0; j<size-i-1; j++){

            if( array[j+1] < array[j] )
                swapNumbers(&array[j], &array[j+1]);

        }

    }

    int k;
    for( k=0; k<size-1 ; k++){
        printf("%d, ", array[k]);
    }
    printf("%d \n ", array[size-1]);
    
}