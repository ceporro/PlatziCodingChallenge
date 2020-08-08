#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

char symbols[8] = {'#','$','%','(',')','/','&','"'};
char * randomChars(char chars[], int len);
char * userChars(int len);
bool isCharInSymbols(char ch);

int main()
{

    int TEXT_SIZE = 4;
    char randomText[TEXT_SIZE];
    char userText[TEXT_SIZE];

    strcpy( randomText, randomChars(symbols, TEXT_SIZE) );

    strcpy( userText, userChars(TEXT_SIZE) );

    printf("The random text is %s \n", randomText);
    printf("The user text is %s \n",userText);

    if( !strcmp(randomText, userText) )
        printf("Your sequence is correct! Congratulations!");
    else
        printf("Your sequence is wrong! Try it again!");


    return 0;
}

char * randomChars(char chars[], int len){

    char textOut[len];

    int i;
    for( i=0; i<len; i++){

        int number = rand()% len;
        char randomCh = chars[number];
        textOut[i] = randomCh; 
    }

    textOut[len] = '\0';
    printf("Remember this characters sequence: \n", textOut);
    printf("%s", textOut);

    sleep(5);

    int j;
    for(j=0; j<len; j++){
        printf("\b");
    }

    char * txtOut = textOut;

    return txtOut;

}

char * userChars(int len){

    char userText[len];
    char nothing;

    int i;
    for( i=0; i<len; i++){
        printf("Type a character include in ");
        int j;
        for( j=0; j<8; j++){
            printf("%c", symbols[j]);
        }
        printf("\n");
        scanf("%c", &userText[i]);
        scanf("%c", &nothing);

        if( !isCharInSymbols(userText[i]) ){
            printf("This character is not valid \n");
            i--;
        }

    }

    userText[len] = '\0';
    printf("%s \n", userText);

    char * userTxt = userText;

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