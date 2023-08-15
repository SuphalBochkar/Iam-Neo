#include <bits/stdc++.h>
using namespace std;

//& Insertion
void start_insert(int num[], int &size, int key);
void middle_insert(int num[], int &size, int key);
void end_insert(int num[], int &size, int key);

int main()
{
    // int n = 5;
    // int num[n + 1] = {2, 3, 7, 9, 11};
    // int key = 99;
    // start_insert(num, n, key);
    // end_insert(num, n, key);
    // middle_insert(num, n, key);

    int n, key;

    cout << "Enter the size of array n: ";
    cin >> n;

    int num[n + 1];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    int size = n;

        cout << "Updated array:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << num[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
