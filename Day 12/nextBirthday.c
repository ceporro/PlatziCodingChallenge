#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{

    int day, month, year;
    printf("Type your birthday year \n");
    scanf("%d", &year);

    printf("Type your birthday month \n");
    scanf("%d", &month);

    printf("Type your birthday day \n");
    scanf("%d", &day);

    time_t today = time(NULL);

    struct tm birthday_str = {0, 0, 0, day, month-1, year-1900 };

    time_t birthday = mktime(&birthday_str);

    //double difference = difftime( today, birthday);
    time_t difference = difftime(today, mktime(&birthday_str));

    // printf("birthday = %ld \n", birthday);
    // printf("today = %ld \n", today);
    printf("You were born %ld days ago \n", difference/(24*3600));

    return 0;
}