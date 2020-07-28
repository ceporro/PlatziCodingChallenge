#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int day, month, year;
    cout <<"Type your birthday year" <<endl;
    cin >> year;

    cout << "Type your birthday month" << endl;
    cin >> month;

    cout << "Type your birthday day" << endl;
    cin >> day;

    time_t today = time(NULL);

    struct tm birthday_str = {0, 0, 0, day, month-1, year-1900 };

    time_t birthday = mktime(&birthday_str);

    //double difference = difftime( today, birthday);
    time_t difference = difftime(today, mktime(&birthday_str));

    // printf("birthday = %ld \n", birthday);
    // printf("today = %ld \n", today);
    cout << "You were born " << difference/(24*3600) << " days ago" << endl;

    return 0;
}