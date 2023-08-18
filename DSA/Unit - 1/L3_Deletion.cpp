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

    while (true)
    {
        cout << endl;
        int choice;
        cout << "Choose an Deletion option:" << endl;
        cout << "1. Delete at the start" << endl;
        cout << "2. Delete at the end" << endl;
        cout << "3. Delete a specific position" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1/2/3/4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Key: ";
            cin >> key;
            start_delete(num, size);
            break;
        case 2:
            cout << "Enter Key: ";
            cin >> key;
            end_delete(num, size);
            break;
        case 3:
            cout << "Enter Key: ";
            cin >> key;
            middle_delete(num, size);
            break;
        case 4:
            cout << "Exiting the program..." << endl;
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    return 0;
}
