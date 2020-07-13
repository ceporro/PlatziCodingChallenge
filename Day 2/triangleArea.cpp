#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float base, height;

    cout << "Type your triangle base:" << endl;
    cin>> base;

    cout << "Type your triangle height:" << endl;
    cin>> height;

    float area = base*height/2;
    cout << "Your triangle area is "<< area << endl;

    float side1, side2, side3;
    float x;

    side1 = base;

    cout << "Type the lenght of one side:" << endl;
    cin>> side2;

    x = side1 - sqrt( pow(side2, 2) - pow(height, 2) );
    // cout << "x = "  << x << endl;

    side3 = sqrt( pow(height, 2) + pow( x, 2) );
    // cout << side3 << endl;

    if(side1 == side2 && side2 == side3)
        cout <<"It is equilateral" << endl;
    else if(side1 != side2 && side2 != side3 && side3 != side1)
        cout <<"It is scalene" << endl;
    else
        cout <<"It is isosceles" << endl;


    return 0;
}
