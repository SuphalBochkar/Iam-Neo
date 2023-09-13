#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &str)
{
    int n = str.length(), st, en;

    st = 0;
    en = n - 1;
    while (st <= en)
    {
        if (str[st] != str[en])
        {
            return false;
        }
        st++;
        en--;
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);

    if (isPalindrome(s))
    {
        cout << "The string is a palindrome.";
    }
    else
    {
        cout << "The string is not a palindrome.";
    }
}