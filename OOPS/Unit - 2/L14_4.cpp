

#include <bits/stdc++.h>
using namespace std;

string reverseSentence(const string &sentence)
{
    string reversedSentence = "";
    string word = "";

    for (char ch : sentence)
    {
        if (ch == ' ')
        {
            reversedSentence = word + " " + reversedSentence;
            word = "";
        }
        else
        {
            word += ch;
        }
    }

    reversedSentence = word + " " + reversedSentence;

    return reversedSentence;
}

void extractVowelsAndConsonants(const string &sentence, string &vowels, string &consonants)
{
    for (char ch : sentence)
    {
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowels += ch;
            }
            else
            {
                consonants += ch;
            }
        }
    }
}

int main()
{
    string sentence;
    getline(cin, sentence);

    string reversedSentence = reverseSentence(sentence);
    string vowels = "";
    string consonants = "";

    extractVowelsAndConsonants(sentence, vowels, consonants);

    cout << reversedSentence << endl;
    cout << vowels << endl;
    cout << consonants << endl;

    return 0;
}
