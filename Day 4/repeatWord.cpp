#include <iostream>
#include <math.h>
#include <string>

using namespace std;

// void repeatWord(word, n){
//     if(n==0)
//         return 0;
//     cout << word << endl;
//     repeatWord(word, n-1);
// }

int repeatWord(string word, int n){
    if(n==0)
        return 0;
    cout << word << endl;
    repeatWord(word, n-1);
}

int main()
{
    int n ;
    string word;

    cout << "Type the word you want to repeat:" << endl;
    cin >> word;

    cout << "Type the number you want to repeat the word:" << endl;
    cin >> n;

    repeatWord(word, n);


    return 0;
}

