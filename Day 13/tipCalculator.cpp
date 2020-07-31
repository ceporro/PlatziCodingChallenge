#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{

    int plates;
    cout<<"Type the number of different plates:" << endl;
    cin >> plates;

    int prices[plates];
    int n[plates];

    int i;
    for(i=0; i<plates; i++){

        cout << "Type the price of plate " << i+1 << endl;
        cin >> prices[i];

        cout << "Type the unities of plate " << i+1 << endl;
        cin >> n[i];

    }

    int j;
    int totalPrice = 0;
    int tip;
    for(j=0; j<plates;j++){
        totalPrice += prices[j]*n[j];
    }
    tip = totalPrice*0.1;

    cout << "The total price is " << totalPrice << endl;
    cout << "The tip is " << tip << "!" << endl;

    return 0;
}
