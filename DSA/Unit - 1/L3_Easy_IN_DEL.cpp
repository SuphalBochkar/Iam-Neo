#include <bits/stdc++.h>
using namespace std;

// Deletion
void start_delete(int num[], int &size);
void middle_delete(int num[], int &size);
void end_delete(int num[], int &size);

// Insertion
void start_insert(int num[], int &size, int key);
void middle_insert(int num[], int &size, int key);
void end_insert(int num[], int &size, int key);

// Print array
void printArray(int num[], int size);

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int num[size];

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Original array:" << endl;
    printArray(num, size);

    // Deletion
    start_delete(num, size);
    middle_delete(num, size);
    end_delete(num, size);

    int key = 10;
    start_insert(num, size, key);

    int key = 20;
    middle_insert(num, size, key);

    int key = 30;
    end_insert(num, size, key);

    cout << "Updated array:" << endl;
    printArray(num, size);

    return 0;
}

void middle_delete(int num[], int &size)
{
    int q = size / 2;
    if (q >= 0 && q < size)
    {
        for (int i = q; i < size - 1; i++)
        {
            num[i] = num[i + 1];
        }
        size--;
    }
    else
    {
        cout << "Invalid position for deletion!" << endl;
    }
}

void end_delete(int num[], int &size)
{
    size--;
}

void start_delete(int num[], int &size)
{
    for (int i = 0; i < size - 1; i++)
    {
        num[i] = num[i + 1];
    }
    size--;
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
    int q = size / 2;
    if (q >= 0 && q <= size)
    {
        for (int i = size; i > q; i--)
        {
            num[i] = num[i - 1];
        }
        num[q] = key;
        size++;
    }
    else
    {
        cout << "Invalid position to insert!" << endl;
    }
}

void printArray(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
}

