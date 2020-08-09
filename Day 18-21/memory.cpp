#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include<unistd.h>

using namespace std;

char symbols[8] = {'#','$','%','(',')','/','&','"'};
string randomChars(char chars[], int len);
string userChars(int len);
bool isCharInSymbols(char ch);

int main()
{

    int TEXT_SIZE = 4;
    string randomText = randomChars(symbols, TEXT_SIZE);
    string userText = userChars(TEXT_SIZE);

    if( randomText == userText )
        printf("Your sequence is correct! Congratulations!");
    else
        printf("Your sequence is wrong! Try it again!");

    return 0;
}

string randomChars(char chars[], int len){

    char textOut[len];

    int i;
    for( i=0; i<len; i++){

        int number = rand()% len;
        char randomCh = chars[number];
        textOut[i] = randomCh; 
    }

    cout << "Try to repeat this sequence: " << endl;
    cout << textOut;

    sleep(5);

    int j;
    for(j=0; j<len; j++){
        printf("\b");
    }

    return textOut;
}

string userChars(int len){

    char userText[len];

    int i;
    for( i=0; i<len; i++){
        cout << "Type a character include in ";
        int j;
        for( j=0; j<8; j++){
            cout << symbols[j];
        }
        cout << endl;
        cin >> userText[i];

        if( !isCharInSymbols(userText[i]) ){
            cout << "This character is not valid" << endl;
            i--;
        }

    }

    userText[len] = '\0';
    cout << userText << endl;

    return userText;

}


bool isCharInSymbols(char ch){

    int i;
    for( i=0; i < sizeof(symbols)/sizeof(symbols[0]); i++)
    {
        if ( i == sizeof(symbols) - 1 )
             return false;
        if( ch == symbols[i] )
            return true;

    }
}