#include <stdio.h>
#include <math.h>

int fibonacci(int n);

int main()
{

    int n;

    printf("Type the number of Fibonacci's serie you want know: \n");
    scanf("%d", &n);

    int f = fibonacci(n);
    printf("F(%d) = %d \n", n, f );

    return 0;
}

int fibonacci(int n){

    int f;

    if( n==0 )
        f = 0;
    else if( n==1 )
        f = 1;
    else
        f = fibonacci(n-1)+fibonacci(n-2);

    return f;
    
}