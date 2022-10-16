#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter year: ";
    cin >> year;
    year = abs(year);

    if ((year % 400 == 0) || ((year % 4 == 0) && !(year % 100 == 0)))
        cout << "This year is leap year";
    else
        cout << "This year is not a leap year";
    return 0;
}