#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

char vowels[10] = {'a', 'e', 'i', 'o', 'u','A','E','I','O','U'};
char textIn[100] = "Hello I am Ceporro and I am the fucking boss";

int wordStart[10];

bool isVowel(char ch){

    for(int i=0; i < sizeof(vowels); i++)
    {
        if ( i == sizeof(vowels) - 1 )
             return false;
        if( ch == vowels[i] )
            return true;

    }
}

int countWords(char text[]){

    int counter = 1;

    for(int i = 0; i < strlen(text); i++){

        if(text[i] == ' ')
        {
            counter++;
        }
        // printf("%d, ", counter);
    }

    return counter;
}

void findWordStart(char text[], int* array){

    int counter = countWords(text);

    wordStart[0] = 0;
    int j = 0;

    for(int i = 0; i < strlen(text); i++){
        if(text[i] == ' ')
        {
            j++;
            wordStart[j] = i+1;
            // printf("%d", i+1);
            // printf("%d", wordStart[j]);
        }
    }


}

char* substring(char text[], int start, int finish){
    char substring[finish-start+2];
    int j = 0;
    for(int i = start; i <= finish; i++){
        substring[j] = text[i];
        // printf("%c \n", substring[j]);
        j++;
    }
    substring[finish-start+1] = '\0';
    printf("%s \n", substring);
    char* sub = substring;
    return sub;
}

char* concatenate( char text1[], char text2[]){
    char stringTot[strlen(text1)+strlen(text2)+1];
    for( int i = 0; i <strlen(text1); i++ ){
        stringTot[i] = text1[i];
    }
    int j = 0;
    for( int i = strlen(text1); i < strlen(text1)+strlen(text2)+1; i++ ){
        stringTot[i] = text2[j];
        j++;
    }
    stringTot[strlen(text1)+strlen(text2)] = '\0';
    printf("%s \n", stringTot);
    char* concat = stringTot;
    return concat;
}



int main()
{

    char addWhenConsonant[3] = {'a', 'y', '\0'};
    char addWhenVowel[4] = {'w','a', 'y', '\0'};

    int counter = countWords(textIn);
    // printf("%d \n", counter);

    findWordStart(textIn, wordStart);

    //  for(int i = 0; i<counter; i++){
    //      printf("%d ", wordStart[i]);
    // }
    // printf("\n");

    // char * second;
    // second = substring(textIn, wordStart[1+1]-1, strlen(textIn));
    // printf("second: %s \n", second);
    // char * third = first;
    // third = strcat(third, second);
    // printf("third: %s \n", third);

    char zero[50];
    char last[50];
    char textOut[200];
    
    char textConditional[100];
    
    int wordStartOriginal[counter];
    for(int i = 0; i < counter; i++){
        wordStartOriginal[i] = wordStart[i];
    }

    for(int i = 0; i < counter -1 ; i++){
        if(i == 0)
            strcpy(textConditional, textIn);
        else
            strcpy(textConditional, zero);

        printf("i=%d \n", i);

        strcpy(last, substring(textIn, wordStartOriginal[i+1]-1, strlen(textIn)-1));
        last[strlen(last)] = '\0';

        if( isVowel( textConditional[wordStart[i]] ))
        {
            strcpy(zero, substring(textConditional, 0, wordStart[i+1]-2));

            strcat(zero, addWhenVowel);
            // printf("zero: %s \n", zero);

            strcat(zero, last);
            printf("%s \n", zero);
            
            for(int j = i; j < sizeof(wordStart)/sizeof(wordStart[0])-1; j++){
                  wordStart[j+1]+=3;
            }
            
            
        }
            
        else
        {
            strcpy(zero, substring(textConditional, 0, wordStart[i]-1));

            char firstChar[2] = {textIn[ wordStartOriginal[i] ] , '\0'};
            printf("%s \n", firstChar);

            char wordWithoutFirst[10];

            strcpy( wordWithoutFirst, substring(textIn, wordStartOriginal[i]+1, wordStartOriginal[i+1]-2)  );

            strcat(zero, wordWithoutFirst);

            strcat(zero, firstChar);

            strcat(zero, addWhenConsonant);

            strcat(zero ,last);

            for(int j = i; j < counter-1; j++){
                wordStart[j+1]+=2;
            }

        }
        // printf( "ZERO %s \n", zero);
    }

    printf( "ZERO %s \n", zero);
    printf( "last word \n");

    if( isVowel( zero[ wordStart[ sizeof(wordStart)/sizeof(wordStart[0])-1 ] ] ))
    {
        strcat(textIn, addWhenVowel);
        printf("%s", textIn);
    }
    else
    {
        strcpy(zero, substring(zero, 0, wordStart[counter-1]-1));

        strcpy(last, substring(textIn, wordStartOriginal[counter-1]+1, strlen(textIn)-1));
        last[strlen(last)] = '\0';

        char firstChar[2] = {textIn[ wordStartOriginal[counter-1] ] , '\0'};
        printf("%s \n", firstChar);

        strcat(zero, last);

        strcat(zero, firstChar);

        strcat(zero, addWhenConsonant);
        printf( "%s \n", zero);
    }




    return 0;
}