#include <stdio.h>
#include <math.h>

void distance( int p1[], int p2[]);


int main()
{

    int p1[2] = {0,0};
    int p2[2] = {4,4};

    distance(p1, p2);

    return 0;
}

void distance(  int p1[], int p2[] ){

    float d = sqrt( pow( (p1[0] - p2[0]), 2 ) + pow( (p1[1] - p2[1]), 2 ) );
    printf("The distance between the points is %f \n", d);
}