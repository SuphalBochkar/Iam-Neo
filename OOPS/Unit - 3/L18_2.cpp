#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    fstream myFile("numbers.txt", ios::out);

    for (int i = 1; i <= n; i++)
    {
        myFile << i << " ";
    }
    myFile.close();

    
    myFile.open("numbers.txt", ios::in);
    int num;
    while (myFile >> num)
    {
        cout << num << " ";
    }

    myFile.close();
    return 0;
}