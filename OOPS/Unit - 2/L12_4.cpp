#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int rollNo, ma1, ma2, ma3;
};

int main()
{
    int n;
    cin >> n;

    Student st[n];

    int maxA = -1;
    int rollA = -1;

    int maxB = -1;
    int rollB = -1;

    int maxC = -1;
    int rollC = -1;

    int maxTotal = -1;
    int maxRoll = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> st[i].rollNo >> st[i].ma1 >> st[i].ma2 >> st[i].ma3;
    }

    for (int i = 0; i < n; i++)
    {
        int total = st[i].ma1 + st[i].ma2 + st[i].ma3;
        cout << total << endl;

        if (maxA < st[i].ma1)
        {
            maxA = st[i].ma1;
            rollA = st[i].rollNo;
        }
        if (maxB < st[i].ma2)
        {
            maxB = st[i].ma2;
            rollB = st[i].rollNo;
        }
        if (maxC < st[i].ma3)
        {
            maxC = st[i].ma3;
            rollC = st[i].rollNo;
        }
        if (maxTotal < total)
        {
            maxTotal = total;
            maxRoll = st[i].rollNo;
        }
    }

    cout << endl;
    cout << rollA << " " << maxA << endl;
    cout << rollB << " " << maxB << endl;
    cout << rollC << " " << maxC << endl;

    cout << endl;
    cout << maxRoll << " " << maxTotal << endl;
}