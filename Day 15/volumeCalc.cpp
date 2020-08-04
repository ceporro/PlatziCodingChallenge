#include <iostream>
#include <math.h>

using namespace std;

void sphereVol(){

    float r;
    cout << "Type the sphere radius:" << endl;
    cin >> r;

    float vol =  4 * M_PI * pow(r, 3) /3;

    cout << "The sphere volume is " << vol << endl << endl;

}
void cubeVol(){

    float a;
    cout << "Type the cube edge:" << endl;
    cin >> a;

    float vol = pow(a, 3);

    cout << "The cube volume is " << vol << endl << endl;

}
void cylinderVol(){

    float r;
    float h;
    cout << "Type the base radius:" << endl;
    cin >> r;    
    cout << "Type the cylinder height:" << endl;
    cin >> h;

    float area = M_PI * pow(r,2);

    float vol = area * h;

    cout << "The cylinder volume is " << vol << endl << endl;

}

int main()
{
    sphereVol();
    cubeVol();
    cylinderVol();

    return 0;
}