#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void charToMorse(char ch);
void textToMorse(char * textIn, int textLength);


int main(){

    char * textIn = "hello what happens";
    int len = strlen(textIn);

    textToMorse(textIn, len);

    return 0;
}



void charToMorse(char ch){

    char * textOut;

    switch (ch){

        case 'a':
            textOut = ".-";
            break;
        case 'b':
            textOut = "-...";
            break;
        case 'c':
            textOut = "-.-.";
            break;
        case 'd':
            textOut = "-..";
            break;
        case 'e':
            textOut = ".";
            break;
        case 'f':
            textOut = "..-.";
            break;
        case 'g':
            textOut = "--.";
            break;
        case 'h':
            textOut = "....";
            break;
        case 'i':
            textOut = "..";
            break;
        case 'j':
            textOut = ".---";
            break;
        case 'k':
            textOut = "-.-";
            break;
        case 'l':
            textOut = ".-..";
            break;
        case 'm':
            textOut = "--";
            break;
        case 'n':
            textOut = "-.";
            break;
        case 'o':
            textOut = "---";
            break;
        case 'p':
            textOut = ".--.";
            break;
        case 'q':
            textOut = "--.-";
            break;
        case 'r':
            textOut = ".-.";
            break;
        case 's':
            textOut = "...";
            break;
        case 't':
            textOut = "-";
            break;
        case 'u':
            textOut = "..-";
            break;
        case 'v':
            textOut = "...-";
            break;
        case 'w':
            textOut = ".--";
            break;
        case 'x':
            textOut = "-..-";
            break;
        case 'y':
            textOut = "-.--";
            break;
        case 'z':
            textOut = "--..";
            break;
        
        default:
            textOut = " ";
            break;
    }

    printf("%s", textOut);

}

void textToMorse(char * textIn, int textLength){
    
    int i;
    for( i=0; i<textLength; i++ ){

        charToMorse(textIn[i]);
        printf(" ");
        
    }

}