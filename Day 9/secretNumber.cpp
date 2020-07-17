#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{

    int secretN = rand() % 11;
    int n;
    int tries = 0;

    do{

        cout << "Try to guess the secret Number! " << endl;
        cin >> n;
        
        if( n == secretN )
        {
            cout << "Congratulations! You win! " << endl;
        } 
        else if( n > secretN)
        {
            cout << "The secret number is smaller than your number. Try again! " <<endl;
            tries++;
        }
        else
        {
            cout << "The secret number is higher than your number. Try again! " <<endl;
            tries++;
        }

    } while( n != secretN );



    return 0;
}