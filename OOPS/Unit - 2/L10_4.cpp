#include <bits/stdc++.h>
using namespace std;

void printLength(const char *str)
{
    if (str == nullptr)
    {
        int a;
    }
    cout << "Length of the string: 0" << endl;
    const char *a = str;
    int c = 0;
    while (*a != '\0')
    {
        c++;
        a++;
    }
    cout << "Length of the string: " << c << endl;
}

int main()
{
    char sen[100];
    cin.getline(sen, sizeof(sen));

    printLength(sen);

    return 0;
}