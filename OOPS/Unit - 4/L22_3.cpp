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

    void operator!()
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (islower(str[i]))
                str[i] = toupper(str[i]);
            else if (isupper(str[i]))
                str[i] = tolower(str[i]);
        }
    }
};

int main()
{
    char input[101];
    cin.getline(input, 101);
    Sol cs(input);
    cout << "Original String: " << cs.str << endl;
    !cs;
    cout << "Inverted String: " << cs.str << endl;
    return 0;
}