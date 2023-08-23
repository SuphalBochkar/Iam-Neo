#include <iostream>
using namespace std;

// Insertion functions
void start_insert(int num[], int &size, int key);
void middle_insert(int num[], int &size, int key);
void end_insert(int num[], int &size, int key);

// Deletion functions
void start_delete(int num[], int &size);
void middle_delete(int num[], int &size);
void end_delete(int num[], int &size);

int main()
{
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
        cout << "Choose an option:" << endl;
        cout << "1. Insertion" << endl;
        cout << "2. Deletion" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
        {
            cout << "Choose an insertion option:" << endl;
            cout << "1. Insert at the start" << endl;
            cout << "2. Insert at the end" << endl;
            cout << "3. Insert at a specific position" << endl;
            cout << "Enter your choice (1/2/3): ";
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
            default:
                cout << "Invalid choice!" << endl;
            }

            cout << "Updated array after insertion:" << endl;
            for (int i = 0; i < size; i++)
            {
                cout << num[i] << " ";
            }
            cout << endl;
            break;
        }
        case 2:
        {
            cout << "Choose a deletion option:" << endl;
            cout << "1. Delete at the start" << endl;
            cout << "2. Delete at the end" << endl;
            cout << "3. Delete a specific position" << endl;
            cout << "Enter your choice (1/2/3): ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                start_delete(num, size);
                break;
            case 2:
                end_delete(num, size);
                break;
            case 3:
                middle_delete(num, size);
                break;
            default:
                cout << "Invalid choice!" << endl;
            }

            cout << "Updated array after deletion:" << endl;
            for (int i = 0; i < size; i++)
            {
                cout << num[i] << " ";
            }
            cout << endl;
            break;
        }
        case 3:
            cout << "Exiting the program..." << endl;
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
        cout << endl;
    }

    return 0;
}
