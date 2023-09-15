#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sen, subSen;

    getline(cin, sen);
    getline(cin, subSen);

    string word = "-removed-";

    size_t found = sen.find(subSen);

    while (found != string::npos)
    {
        sen.replace(found, subSen.length(), word);
        
        found = sen.find(subSen, found + word.length());
    }

    cout << sen << endl;
}