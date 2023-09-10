#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> name(n);
    vector<int> trig(n);

    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
        cin >> trig[i];
    }

    cout << "Attendance Report:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << name[i] << ": " << ((trig[i] == 1) ? "Present" : "Absent") << endl;
    }
}