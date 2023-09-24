#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    ofstream outFile;
    outFile.open("ages.txt");

    for (int i = 0; i < n; i++)
    {
        float a;
        cin >> a;
        sum += a;
    }

    outFile << fixed << setprecision(1) << sum/float(n) << endl;
    outFile.close();

    if (n > 20)
    {
        cout << "Exceeding limit!" << endl;
        return 0;
    }

    ifstream inFile("ages.txt");

    string line;

    while (inFile >> line)
    {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}
