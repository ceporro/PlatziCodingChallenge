#include <stdio.h>
#include <math.h>

int main()
{
    float base, height;

    printf("Type your triangle base: \n");
    scanf("%f", &base);

    printf("Type your triangle height:\n");
    scanf("%f", &height);

    float area = base*height/2;
    printf("Your triangle area is %f \n", area);

    float side1, side2, side3;
    float x;

    side1 = base;

    printf("Type the lenght of another side:\n");
    scanf("%f", &side2);

    x = side1 - sqrt( pow(side2, 2) - pow(height, 2) );
    side3 = sqrt( pow(height, 2) + pow(x, 2) );
    
    if(side1 == side2 && side2 == side3)
        printf("It is equilateral \n");
    else if(side1 != side2 && side2 != side3 && side3 != side1)
        printf("It is scalene \n");
    else
        printf("It is isosceles \n");
       
    

    return 0;
}
