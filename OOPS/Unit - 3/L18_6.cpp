#include <bits/stdc++.h>
using namespace std;

int main()
{
    string filename;
    cin >> filename;

    ifstream inFile(filename.c_str());

    // if (inFile.is_open())
    // {
    cout << "File '" << filename << "' opened successfully." << endl;
    inFile.close();
    // }

    cout << "File '" << filename << "' closed successfully." << endl;

    return 0;
}
