#include <bits/stdc++.h>
using namespace std;

class Sol
{
public:
    queue<char> qu;
    string sen;
    string rev = "";

    void init(const string &line)
    {
        sen = line;
        for (char c : sen)
        {
            qu.push(c);
        }
    }

    void revQ()
    {
        while (!qu.empty())
        {
            rev = qu.front() + rev;
            qu.pop();
        }
    }

    void display()
    {
        cout << "Reversed string: " << rev << endl;
    }
};

int main()
{
    string input;
    getline(cin, input);

    Sol s;

    s.init(input);

    s.revQ();
    s.display();

    return 0;
}
