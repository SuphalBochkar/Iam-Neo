// Finds the is word present in the sentence

#include <bits/stdc++.h>
using namespace std;

bool iswordPresent(const string &sentence, const string &word)
{
    int sentenceLength = sentence.length();
    int wordLength = word.length();

    for (int i = 0; i <= sentenceLength - wordLength; ++i)
    {
        bool found = true;
        for (int j = 0; j < wordLength; ++j)
        {
            if (sentence[i + j] != word[j])
            {
                found = false;
                break;
            }
        }
        if (found)
        {
            return true;
        }
    }
    return false;
}
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
