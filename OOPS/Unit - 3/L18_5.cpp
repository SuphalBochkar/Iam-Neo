// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string word;
//     int num;

//     getline(cin, word);
//     cin >> num;

//     ofstream file("sample.txt");

//     for (int i = 0; i < num; i++)
//     {
//         file << word << endl;
//     }
//     file << "End of file reached" << endl;

//     file.close();

//     ifstream file2("sample.txt");
//     string line;
//     while (getline(file2, line))
//     {
//         cout << line << endl;
//     }
//     file2.close();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string text;
    int count;
    cin >> text >> count;

    ofstream outFile("sample.txt");
    if (!outFile.is_open())
    {
        cout << "Unable to open file." << endl;
        return -1;
    }

    for (int i = 0; i < count; i++)
    {
        outFile << text << endl;
    }
    outFile.close();

    ifstream inFile("sample.txt");
    inFile.seekg(0);

    while (getline(inFile, text))
    {
        cout << text << endl;
    }

    if (inFile.eof())
    {
        cout << "End of file reached" << endl;
    }

    inFile.close();

    return 0;
}
