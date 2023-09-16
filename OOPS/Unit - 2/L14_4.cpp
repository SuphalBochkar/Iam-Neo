

#include <bits/stdc++.h>
using namespace std;

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
