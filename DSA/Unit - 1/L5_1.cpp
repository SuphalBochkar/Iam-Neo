// Finds the is word present in the sentence

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string sen;
    getline(cin, sen);

    string word;
    cin >> word;

    if (iswordPresent(sen, word))
    {
        cout << "The word '" << word << "' is present in the given sentence.";
    }
    else
    {
        cout << "The word '" << word << "' is not  present in the given sentence.";
    }
}
