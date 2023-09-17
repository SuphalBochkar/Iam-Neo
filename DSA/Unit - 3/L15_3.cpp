#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stack<char> arr;
    for (int i = 0; i < s.length(); i++)
    {
        arr.push(s[i]);
    }

    while (!arr.empty())
    {
        cout << arr.top();
        arr.pop();
    }

    return 0;
}