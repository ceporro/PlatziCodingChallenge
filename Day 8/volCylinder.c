#include <stdio.h>
#include <math.h>

int main()
{

    float r, h;
    float vol;

    printf("Type the radio of the cylinder base:");
    scanf("%f", &r);

    printf("Type the height of the cylinder:");
    scanf("%f", &h);

    vol = h*pow(r,2)*M_PI;

    printf("The volume is %f", vol);

    

    return 0;
}

