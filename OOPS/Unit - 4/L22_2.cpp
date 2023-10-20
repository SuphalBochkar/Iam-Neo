#include <bits/stdc++.h>
using namespace std;

class Sol
{
private:
    string s;

public:
    Sol(string t) : s(t){};

    string toTitleCase(const string &input)
    {
        string result = input;
        bool makeUpper = true;

        for (size_t i = 0; i < result.length(); i++)
        {
            if (isalpha(result[i]))
            {
                if (makeUpper)
                {
                    result[i] = toupper(result[i]);
                    makeUpper = false;
                }
                else
                {
                    result[i] = tolower(result[i]);
                }
            }
            else
            {
                makeUpper = true;
            }
        }

        return result;
    }

    void operator++()
    {
        cout << "Modified string: " << toTitleCase(s) << endl;
    }
};

int main()
{
    string t;
    getline(cin, t);

    Sol s(t);

    cout << "Original string: " << t << endl;
    ++s;

    return 0;
}
