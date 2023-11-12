#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr = new int[100];
    int a;
    int x = 0;

    do
    {
        cin >> a;
        arr[x] = a;
        x++;
    } while (a > 0);

    int n = x - 1;

    int sum = 0;
    cout << "Numbers entered: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        sum += arr[i];
    }

    cout << "\nSum of entered numbers: " << sum << endl;
    cout << "Average of entered numbers: " << fixed << setprecision(2) << sum / n;
    return 0;
}