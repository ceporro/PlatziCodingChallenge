#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float r, h;
    float vol;

    cout << "Type the radio of your cylinder base:" << endl;
    cin >> r;

    cout << "Type the height of your cylinder:" << endl;
    cin >> h;

    vol = M_PI*h*pow(r,2);
    cout << "The volume is " << vol << endl;

    return 0;
}