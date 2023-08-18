#include <bits/stdc++.h>
using namespace std;

//& Deletion

void start_delete(int num[], int &size);
void middle_delete(int num[], int &size);
void end_delete(int num[], int &size);

int main()
{
    // int n = 5;
    // int num[n] = {2, 3, 7, 9, 11};
    // start_delete(num, n);
    // middle_delete(num, n);
    // end_delete(num, n);

    int n, key;

    cout << "Enter the size of array n: ";
    cin >> n;

    int num[n];

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    int size = n;

    return 0;
}
