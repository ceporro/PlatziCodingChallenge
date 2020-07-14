#include <stdio.h>

void repeatWord(word, n){
    if(n==0)
        return 0;
    printf("%s \n", word);
    repeatWord(word, n-1);
} 

int main(int argc, char const *argv[])
{
    int n;
    char word[25];

    printf("What word do you want to repeat?...");
    scanf("%s", word);

    printf("How many times do you want to repeat the word:");
    scanf("%d", &n);

    repeatWord(word, n);
    
    return 0;
}
