#include <iostream>
#include <math.h>

using namespace std;

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

void findPrimeNumbers(int max){

    int counter = countPrimeNumbers(max);
    int primeNumbers[counter];
    int i,j;
    j=0;
    for(i=2; i<=max; i++){
        if( isPrime(i) ){
            primeNumbers[j] = i;
            j++;
        }
    }

    cout << "There are " << counter << " prime numbers until " << max << "!:"<< endl;
    int k;
    for(k=0; k<counter-1; k++){
        cout << primeNumbers[k] << ", ";
    }
    cout << primeNumbers[counter-1] << endl;
    
}



int main()
{

    findPrimeNumbers(100);

    return 0;
}




