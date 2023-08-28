// Finds no of words in sentence

#include <bits/stdc++.h>
// using namespace std;

// int noOfWords(const string &sentence)
// {
//     int n = sentence.length();
//     int count = 0;
//     bool inWord = false; 

//     for (char c : sentence)
//     {
//         if (c != ' ')
//         {
//             if (!inWord)
//             {
//                 count++;
//                 inWord = true;
//             }
//         }
//         else
//         {
//             inWord = false;
//         }
//     }
//     return count;
// }

// int main()
// {

//     string sen;
//     getline(cin, sen);

//     cout << noOfWords(sen);
// }

#include <iostream>
using namespace std;

int countWords(const string &sentence)
{
    int wordCount = 0;
    bool inWord = false;

    for (char c : sentence)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            inWord = false;
        }
        else
        {
            if (!inWord)
            {
                wordCount++;
                inWord = true;
            }
        }
    }

    return wordCount;
}

int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int words = countWords(sentence);
    cout << "Number of words: " << words << endl;

    return 0;
}
