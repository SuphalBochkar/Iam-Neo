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

    while (true)
    {
        cout << endl;
        int choice;
        cout << "Choose an insertion option:" << endl;
        cout << "1. Insert at the start" << endl;
        cout << "2. Insert at the end" << endl;
        cout << "3. Insert at a specific position" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1/2/3/4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Key: ";
            cin >> key;
            start_insert(num, size, key);
            break;
        case 2:
            cout << "Enter Key: ";
            cin >> key;
            end_insert(num, size, key);
            break;
        case 3:
            cout << "Enter Key: ";
            cin >> key;
            middle_insert(num, size, key);
            break;
        case 4:
            cout << "Exiting the program..." << endl;
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }

        cout << "Updated array:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << num[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

void start_insert(int num[], int &size, int key)
{
    for (int i = size; i > 0; i--)
    {
        num[i] = num[i - 1];
    }

    num[0] = key;
    size++;
}

void end_insert(int num[], int &size, int key)
{
    num[size] = key;
    size++;
}

void middle_insert(int num[], int &size, int key)
{
    int q;
    cout << "Enter Position to Insert - Place: ";
    cin >> q;

    if (q >= 1 && q <= size + 1)
    {
        //~For sorted Array O(n)

        for (int i = size; i > q - 1; i--)
        {
            num[i] = num[i - 1];
        }

        //~For unsorted Array O(1)
        // num[size] = num[q - 1];

        num[q - 1] = key;
        size++;
    }
    else
    {
        cout << "Invalid position to insert!" << endl;
    }
}
