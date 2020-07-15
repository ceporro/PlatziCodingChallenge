
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

char vowels[] = {'a','e','i','o','u','A','E','I','O','U'};

int vowelsLength = sizeof(vowels);

bool isVowel(char ch){

    for(unsigned int i=0; i < vowelsLength; i++)
    {
        if ( i == vowelsLength - 1 )
             return false;
        if( ch == vowels[i] )
        {
            return true;
        }
    }
}

int main()
{

    string textIn = "Hello I am Ceporro hahahaha";
    string textOut = "";

    int textLength = textIn.length();

    for(int i=0; i< textLength; i++){

        if( isVowel( textIn[i]) == 1)
            textOut += '_';
        else
            textOut += textIn[i];

    }

    cout <<  textOut << endl;


    return 0;
}
