#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    int n;
    cin >> n;

    vector<int> mar(n);
    float sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        float a;
        cin >> a;
        sum += a;
    }

    cout << "Product Details: " << endl;
    cout << "Name: " << name << endl;
    cout << "Average Rating: " << fixed << setprecision(2) << sum / float(n);
}
