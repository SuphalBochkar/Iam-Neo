#include <bits/stdc++.h>
using namespace std;

class Sol
{
public:
    string s;
    int n;
    Sol(string word, int no) : s(word), n(no) {}

    void operator+()
    {
        for (int i = 0; i < n; i++)
        {
            cout << s;
        }
        cout << endl;
    }
    void operator-(Sol other)
    {
        cout << s << other.s << endl;
    }
};

int main()
{
    int n;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cin >> n;
    Sol word1(s1, n), word2(s2, n);
    word1 - word2;
    +word1;
    +word2;

    return 0;
}
