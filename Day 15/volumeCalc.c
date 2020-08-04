#include <stdio.h>
#include <math.h>

void sphereVol(){

    float r;
    printf("Type the sphere radius: \n");
    scanf("%f", &r);

    float vol = 4/3 * M_PI * pow(r, 3);

    printf("The sphere volume is %f \n", vol);

}
void cubeVol(){

    float a;
    printf("Type the cube edge: \n");
    scanf("%f", &a);

    float vol = pow(a, 3);

    printf("The cube volume is %f \n", vol);

}
void cylinderVol(){

    float r;
    float h;
    printf("Type the base radius: \n");
    scanf("%f", &r);
    printf("Type the cylinder height: \n");
    scanf("%f", &h);

    float area = M_PI * pow(r,2);

    float vol = area * h;

    printf("The cylinder volume is %f \n", vol);

}

int main()
{
    sphereVol();
    cubeVol();
    cylinderVol();

    return 0;
}