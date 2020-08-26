#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int countDivisors(int n);
int *findDivisors(int n, int * divisors);
bool isPrime(int n);
int countPrimeNumbers(int max);
void findPrimeNumbers(int size);

int main()
{

    findPrimeNumbers(10);
    findPrimeNumbers(100);
    findPrimeNumbers(1000);
    findPrimeNumbers(10000);

    return 0;
}

int countDivisors(int n){

    int m;
    int counter=0;

    for(m=1; m<=n; m++){
        if(n%m == 0)
            counter++;
    }

    return counter;
}

int * findDivisors(int n, int * divisors){

    int counter = countDivisors(n);

    divisors[counter];
    divisors[0] = 1;
    
    int i,j;
    j=1;
    for(i = 2; i<=n; i++){
        if(n%i == 0){
            divisors[j] = i;
            j++;
        }
    }
    // int k;
    // for(k=0; k<(sizeof(divisors)/sizeof(divisors[0])); k++){
    //     printf("div %d = %d \n", k, divisors[k]);
    // }

    // int * div = divisors;
    return divisors;
}

bool isPrime(int n){
    int counter = countDivisors(n);
    int divisors[counter];
    findDivisors(n, divisors);
    if( sizeof(divisors)/sizeof(divisors[0]) > 2 )
        return false;
    else
        return true;
        
}

int countPrimeNumbers(int max){
    
    int i,j;
    j=0;
    for(i=2; i<=max; i++){
        if(isPrime(i)){
            j++;
        }
    }

    return j;
}

void findPrimeNumbers(int size){


    int primeNumbers[size];
    int i=2;
    int j=0;

    do{

        if(isPrime(i)){
            primeNumbers[j] = i;
            j++;
        }

        i++;

    } while ( j < size);
    
    // int k;
    // for(k=0; k<size-1; k++){
    //     printf("%d, ", primeNumbers[k]);
    // }
    // printf("%d \n", primeNumbers[size-1]);
    printf("The %d prime number is %d \n", size, primeNumbers[size-1]);
    
}