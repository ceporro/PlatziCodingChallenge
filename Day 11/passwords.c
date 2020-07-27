#include <stdio.h>
#include <math.h>
#include <string.h>

char lowerLetters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 
char upperLetters[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; 
char symbols[23] = {'ª','"','·','$','%','&','/','(',')','=','?','¿','|','@','#','~','€',',',';','.',':','-','_'};
char numbers[10] = {'0','1','2','3','4','5','6','7','8','9'};


char randomLower(){

    int n = rand()% ( sizeof(lowerLetters)/sizeof(lowerLetters[0]) );
    char letter = lowerLetters[n];

    return letter;
    
}

char randomUpper(){

    int n = rand()% ( sizeof(upperLetters)/sizeof(upperLetters[0]) );
    char letter = upperLetters[n];

    return letter;
    
}

char randomSymbol(){

    int n = rand()% ( sizeof(symbols)/sizeof(symbols[0]) );
    char symbol = symbols[n];

    return symbol;
    
}

char randomNumber(){

    int n = rand()% ( sizeof(numbers)/sizeof(numbers[0]) );
    char number = numbers[n];

    return number;
    
}

char generateChar(int array[]){

    int i;
    int counter = 0;
    for( i=0; i<4 ; i++){
        // printf("%d \n", array[i]);
        if(array[i]==1){
            // printf("counter=%d \n", counter);
            counter++;
        }
    }

    char ch;
    
    int cases;
    if(counter>1)
    {
        cases = rand() % (counter -1);
    }
    else
    {
        cases = 1;
    } 



    switch(counter){

        case 1:
            if(array[0]==1)
                ch = randomLower();
            else if(array[1]==1)
                ch = randomUpper();
            else if(array[2]==1)
                ch = randomSymbol();
            else 
                ch = randomNumber();
            
            break;

        case 2:

            if(array[0]==1 && array[1]==1)
            {
                switch (cases)
                {
                case 0:
                    ch = randomLower();
                    break;
                
                case 1:
                    ch = randomUpper();
                    break;
                }
            }
            else if(array[0]==1 && array[2]==1)
            {
                switch (cases)
                {
                case 0:
                    ch = randomLower();
                    break;
                
                case 1:
                    ch = randomSymbol();
                    break;
                }
            }
            else if(array[0]==1 && array[3]==1)
            {
                switch (cases)
                {
                case 0:
                    ch = randomLower();
                    break;
                
                case 1:
                    ch = randomNumber();
                    break;
                }
            }
            else if(array[1]==1 && array[2]==1)
            {
                switch (cases)
                {
                case 0:
                    ch = randomUpper();
                    break;
                
                case 1:
                    ch = randomSymbol();
                    break;
                }
            }
            else if(array[1]==1 && array[3]==1)
            {
                switch (cases)
                {
                case 0:
                    ch = randomUpper();
                    break;
                
                case 1:
                    ch = randomNumber();
                    break;
                }
            }
            else
            {
                switch (cases)
                {
                case 0:
                    ch = randomSymbol();
                    break;
                
                case 1:
                    ch = randomNumber();
                    break;
                }
            }
            break;

        case 3:

            if(array[3]==0)
            {
                switch (cases)
                {
                case 0:
                    ch = randomLower();
                    break;
                case 1:
                    ch = randomUpper();
                    break;
                case 2:
                    ch = randomSymbol();
                    break;
                }
            }
            else if(array[2]==0)
            {
                switch (cases)
                {
                case 0:
                    ch = randomLower();
                    break;
                
                case 1:
                    ch = randomUpper();
                    break;
                case 2:
                    ch = randomNumber();
                    break;
                }
            }
            if(array[1]==0)
            {
                switch (cases)
                {
                case 0:
                    ch = randomLower();
                    break;
                
                case 1:
                    ch = randomSymbol();
                    break;
                case 2:
                    ch = randomNumber();
                    break;
                }
            }
            else
            {
                switch (cases)
                {
                case 0:
                    ch = randomUpper();
                    break;
                case 1:
                    ch = randomSymbol();
                    break;
                case 2:
                    ch = randomNumber();
                    break;
                }
            }
            break;

        case 4:

            switch (cases)
            {
            case 0:
                ch = randomLower();
                break;
            case 1:
                ch = randomUpper();
                break;
            case 2:
                ch = randomSymbol();
                break;
            case 3:
                ch = randomNumber();
                break;
            }
            break;

        default:
            printf("Your password can't be created: Type Y in some option.");

    }

    return ch;
}


int main()
{
    char nothing;
    int len;
    printf("Type the password length: \n");
    scanf("%d", &len);
    scanf("%c", &nothing);


    char low;
    printf("Do you want to include lowercase letters? (Y/N) \n");
    scanf("%c", &low);
    scanf("%c", &nothing);

    char upp;
    printf("Do you want to include uppercase letters? (Y/N) \n");
    scanf("%c", &upp);
    scanf("%c", &nothing);
    

    char sym;
    printf("Do you want to include symbols? (Y/N) \n");
    scanf("%c", &sym);
    scanf("%c", &nothing);

    char num;
    printf("Do you want to include numbers? (Y/N) \n");
    scanf("%c", &num);

    int array[4] = {0, 0, 0, 0};

    if(low == 'Y' || low == 'y')
        array[0] = 1;
    if(upp == 'Y' || upp == 'y')
        array[1] = 1;
    if(sym == 'Y' || sym == 'y')
        array[2] = 1;
    if(num == 'Y' || num == 'y')
        array[3] = 1;

    char password[len];

    int j;
    for( j = 0; j<len; j++){
        password[j] = generateChar(array);
        // printf("pass:%c \n", password[j]);
    }

    printf("%s \n", password);
    

    return 0;
}