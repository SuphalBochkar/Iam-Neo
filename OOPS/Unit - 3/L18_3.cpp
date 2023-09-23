#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxi = INT_MIN;
    int mini = INT_MAX;

    ofstream myFile("sample.dat");
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        myFile << a << " ";
    }

    myFile.close();

    ifstream inputFile("sample.dat");
    int num;
    while (inputFile >> num)
    {
        maxi = max(maxi, num);
        mini = min(mini, num);
    }

    cout << maxi << " " << mini;
    inputFile.close();
    return 0;
}
