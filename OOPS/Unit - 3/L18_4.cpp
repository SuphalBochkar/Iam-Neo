#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    float deci;
    string word;

    cin >> num >> deci >> word;

    ofstream file("test.txt");

    file << num << " " << deci << endl;
    file << word << endl;
    file << "Sum of integer and float: " << float(num) + deci;

    file.close();

    ifstream file2("test.txt");
    string line;
    while (getline(file2, line))
    {
        cout << line << endl;
    }

    return 0;
}