#include <bits/stdc++.h>
using namespace std;

class Sol
{
public:
    char str[101];
    Sol(const char *s)
    {
        strcpy(str, s);
    }

    void operator++()
    {
        str[0] = toupper(str[0]);
    }
};

int main()
{
    char input[101];
    cin.getline(input, 101);

    Sol s(input);

    cout << "Original string: " << s.str << endl;
    ++s;
    cout << "Modified string: " << s.str << endl;

    return 0;
}