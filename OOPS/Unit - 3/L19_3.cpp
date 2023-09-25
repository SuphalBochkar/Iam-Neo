#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    ofstream outFile("even.txt");
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            outFile << i << endl;
        }
    }
    outFile.close();

    ifstream inFile("even.txt");
    int z;
    while (inFile >> z)
    {
        cout << z << endl;
    }

    inFile.close();

    return 0;
}
