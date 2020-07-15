#include <stdio.h>
#include <math.h>
#include <stdbool.h>

char vowels[20] = {'a','e','i','o','u','A','E','I','O','U', 160, 130, 161, 162, 163, 181, 144, 214, 224, 23};

bool isVowel(char ch){

    for(int i=0; i < sizeof(vowels); i++)
    {
        if ( i == sizeof(vowels) - 1 )
             return false;
        if( ch == vowels[i] )
        {
            return true;
        }
    }
}

int main()
{
    
    char textIn[1000] = "Lorem ipsum dolor sit amet, vis id impetus urbanitas, vix soluta voluptaria et, mea illud lorem oblique ne. Eu vim congue voluptua molestiae, id vix atqui iracundia. Ut mea impetus denique, cibo soluta delenit te est. An errem disputando vix. Usu consul debitis partiendo id. Dicit delicatissimi vel ut, et mei omnis minimum. Id idque labore maiorum pri, ne tation audiam accumsan mei. Quis oratio ex his, civibus suavitate dissentias eum ei. An admodum dissentiet mea, sed at aperiam eruditi quaerendum, prima scaevola ei nam.";
    char textOut[1000];

    for(int i=0; i< sizeof(textIn); i++){

        if( isVowel( textIn[i]) )
            textOut[i] = '_';
        
        else
            textOut[i] = textIn[i];
        
    }
    
    printf("%s \n", textOut);

    return 0;
}
