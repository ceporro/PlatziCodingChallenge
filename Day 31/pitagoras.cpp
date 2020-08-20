#include <iostream>
#include <math.h>

using namespace std;

class Point{
        
    public:
        
        int x;
        int y;

        Point(int X, int Y){
            x = X;
            y = Y;
        }

};

int main()
{
    Point p1(0,0);
    Point p2(3,4);

    int d = sqrt( pow( (p1.x - p2.x), 2 ) + pow( (p1.y - p2.y), 2 ) );
    cout << "The distance between the points is " << d << endl;

    return 0;
}
