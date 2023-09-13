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

    cout << endl;
    cout << rollA << " " << maxA << endl;
    cout << rollB << " " << maxB << endl;
    cout << rollC << " " << maxC << endl;

    cout << endl;
    cout << maxRoll << " " << maxTotal << endl;
}