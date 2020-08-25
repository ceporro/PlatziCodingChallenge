#include <stdio.h>
#include <math.h>

void solveEq(int a, int b, int c);

int main()
{

    int a, b, c;
    printf("Type the coeficients a, b and c: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    solveEq(a, b, c);

    return 0;
}

void solveEq(int a, int b, int c){

    float r = pow( b, 2 ) - 4*a*c;

    if( r < 0 )
        printf("The equation %dx^2 + %dx + %d = 0 has not solution in the real numbers", a, b, c);
    else if(a == 0){
        float x = -c/b;
        printf("The solution for %dx + %d = 0 is x=%f", b, c, x);
    }
    else if(r == 0){
        float x = -b/(2*a);
        printf("The solution for %dx^2 + %dx + %d = 0 is double x=%f", a, b, c, x);
    }
    else{
        float x1 = ( -b + sqrt(r) )/(2*a);
        float x2 = ( -b - sqrt(r) )/(2*a);
        printf("The solutions for %dx^2 + %dx + %d = 0 are x1=%f and x2=%f", a, b, c, x1, x2);
    }

}