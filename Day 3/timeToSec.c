#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int hours, minutes;

    printf("I wanna convert your hours and minutes in seconds...\n");

    printf("Type the hours:");
    scanf("%d", &hours);

    printf("Type the minutes:");
    scanf("%d", &minutes);

    int seconds = hours*3600 + minutes*60;
    printf("Seconds =  %d", seconds);
    
    return 0;
}
