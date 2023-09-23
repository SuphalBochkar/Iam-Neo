#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    ofstream outFile;
    outFile.open("income.txt");

    for (int i = 0; i < n; i++)
    {
        float a;
        cin >> a;

        outFile << fixed << setprecision(1) << a * 12 << " ";
    }

    outFile.close();

    if (n > 50)
    {
        cout << "Exceeding limit!" << endl;
        return 0;
    }

    ifstream inFile("income.txt");

    string line;

    while (inFile >> line)
    {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}
