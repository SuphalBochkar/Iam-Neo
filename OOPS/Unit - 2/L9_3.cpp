#include <bits/stdc++.h>
using namespace std;

int wordCount(string sen)
{
    int cnt = 0;
    bool inWord = false; // Suphal is a good boy

    for (char c : sen)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            inWord = false;
        }
        else
        {
            if (!inWord)
            {
                cnt++;
                inWord = true;
            }
        }
    }
}



int main()
{
    string sen;

    getline(cin, sen);
    cout << wordCount(sen);
}
