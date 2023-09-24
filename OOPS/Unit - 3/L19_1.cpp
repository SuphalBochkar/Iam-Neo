// #include <bits/stdc++.h>
// using namespace std;

// struct FileData
// {
//     string fileName;
//     int size;
//     int arr[100];
// };

// int main()
// {
//     FileData f;

//     cin >> f.size;

//     if (f.size > 100)
//     {
//         cout << "Exceeding limit!";
//         return 0;
//     }

//     for (int i = 0; i < f.size; ++i)
//         cin >> f.arr[i];

//     f.fileName = "alt.txt";

//     ofstream file(f.fileName);
//     if (file.is_open())
//     {
//         for (int i = 0; i < f.size; i += 2)
//         {
//             file << f.arr[i] << " ";
//         }
//         file.close();
//     }

//     ifstream readFile(f.fileName);
//     if (readFile.is_open())
//     {
//         int num;
//         while (readFile >> num)
//         {
//             cout << num << " ";
//         }
//         cout << endl;
//         readFile.close();
//     }

//     return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    if (size > 100)
    {
        cout << "Exceeding limit!" << endl;
        return 0;
    }

    ofstream file("alt.txt");
    if (!file.is_open())
    {
        cerr << "Error opening file." << endl;
        return 1;
    }

    int num;
    for (int i = 0; i < size; ++i)
    {
        cin >> num;
        if (!(i & 1))
        {
            file << num << " ";
        }
    }
    file.close();

    ifstream readFile("alt.txt");
    if (!readFile.is_open())
    {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    while (readFile >> num)
    {
        cout << num << " ";
    }
    cout << endl;

    readFile.close();

    return 0;
}
