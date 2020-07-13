#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int hours, minutes;

    cout << "I wanna convert your hours and minutes in seconds..." << endl;

    cout << "Type the hours:" <<endl;
    cin >> hours;

    cout << "Type the minutes:" <<endl;
    cin >> minutes;

    int seconds = hours*3600 + minutes*60;
    cout << "Seconds =  " << seconds <<endl;
    
    return 0;
}
