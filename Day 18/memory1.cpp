#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>



using namespace std;

char symbols[8] = {'#','$','%','(',')','/','&','"'};
void randomChars(char chars[], int len);

int main()
{

    int TEXT_SIZE = 4;
    randomChars(symbols, TEXT_SIZE);

    return 0;
}

void randomChars(char chars[], int len){

    char textOut[len];

    int i;
    for( i=0; i<len; i++){

        int number = rand()% len;
        char randomCh = chars[number];
        textOut[i] = randomCh; 
    }
    cout << textOut << endl;

}