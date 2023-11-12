#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year)
{
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

int getDaysInMonth(int year, int month)
{
    if (month == 2)
    {
        if (isLeapYear(year))
            return 29;
        else
            return 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

int getDayOfWeek(int year, int month, int day)
{
    int a = (14 - month) / 12;
    int y = year - a;
    int m = month + 12 * a - 2;
    int d = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
    return d;
}

void printCalendar(int year, int month)
{
    int daysInMonth = getDaysInMonth(year, month);
    int startDayOfWeek = getDayOfWeek(year, month, 1);

    cout << "=========================" << endl;
    cout << "    " << month << "/" << year << " Calendar    " << endl;
    cout << "=========================" << endl;
    cout << "Mon Tue Wed Thu Fri Sat Sun" << endl;

    int day = 1;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == 0 && j < startDayOfWeek)
                cout << "     ";
            else if (day <= daysInMonth)
            {
                printf("%4d ", day);
                day++;
            }
            else
                cout << "     ";
        }
        cout << endl;
    }
}

int main()
{
    int *a = new int;
    int month, year;
    cin >> month;
    cin >> year;

    if (month < 1 || month > 12 || year < 0)
        cout << "Invalid input. Please enter a valid month (1-12) and year." << endl;
    else
        printCalendar(year, month);

    delete a;
    return 0;
}