#include <iostream>
#include <math.h>
#include <string>

using namespace std;

char vowels[10] = {'a', 'e', 'i', 'o', 'u','A','E','I','O','U'};
string textIn = "Hello I am Ceporro and I am the fucking boss";

int wordStart[20];

bool isVowel(char ch){

    for(unsigned int i=0; i < sizeof(vowels); i++)
    {
        if ( i == sizeof(vowels) - 1 )
             return false;
        if( ch == vowels[i] )
            return true;
    }
}

int countWords(string text){

    int counter = 1;

    for(int i = 0; i < text.length(); i++){

        if(text[i] == ' ')
            counter++;
    }
    return counter;
}

void findWordStart(string text, int* array){

    int counter = countWords(text);

    wordStart[0] = 0;
    int j = 0;

    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' ')
        {
            j++;
            wordStart[j] = i+1;
        }
    }
}

string substring(string text, int start, int finish){
    string substring = "";

    for(int i = start; i <= finish; i++){
        substring += text[i];
    }

    return substring;
}


int main()
{

    string addWhenConsonant = "ay";
    string addWhenVowel = "way";

    int counter = countWords(textIn);

    findWordStart(textIn, wordStart);

    string textOut;

    int wordStartOriginal[counter];
    for(int i = 0; i < counter; i++){
        wordStartOriginal[i] = wordStart[i];
    }


    for(int i = 0; i < counter-1 ; i++){
        
        cout << "i=" <<i <<endl;

        if( isVowel( textIn[wordStart[i]] ))
        {
            textIn = substring(textIn, 0,wordStart[i+1]-2) + addWhenVowel + substring( textIn, wordStart[i+1]-1, textIn.length()-1 );
            
            for(int j = i; j < counter-1; j++){
                  wordStart[j+1]+=3;
            }
            
            
        }
            
        else
        {
            textIn = substring(textIn, 0, wordStart[i]-1) + substring(textIn, wordStart[i]+1,wordStart[i+1]-2) + textIn[wordStart[i]] + addWhenConsonant + substring(textIn, wordStart[i+1]-1, textIn.length()-1);

            for(int j = i; j < counter-1; j++){
                wordStart[j+1]+=2;
            }

        }
        cout << textIn << "F"<< endl;
    }


    cout <<"i=" << counter-1 << endl;

    if( isVowel( textIn[ wordStart[ counter-1 ] ] ))
        textIn +=  addWhenVowel;
    else
        textIn = substring(textIn, 0, wordStart[ counter-1 ]-1) + substring(textIn, wordStart[counter-1]+1, textIn.length()-1) + textIn[wordStart[counter-1]] + addWhenConsonant;
    


    cout << textIn << endl;


    return 0;
}