#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int evaluatePostfix(const string &postfix)
{
    stack<int> s;

    for (char c : postfix)
    {

        if (c == ' ')
        {
            continue;
        }
        if (isdigit(c))
        {
            s.push(c - '0');
        }
        else if (isOperator(c))
        {
            int y = s.top();
            s.pop();
            int x = s.top();
            s.pop();

            switch (c)
            {
            case '+':
                s.push(x + y);
                break;
            case '-':
                s.push(x - y);
                break;
            case '*':
                s.push(x * y);
                break;
            case '/':
                s.push(x / y);
                break;
            }
        }
    }

    if (!s.empty())
    {
        return s.top();
    }
}

int main()
{
    string postfix;
    getline(cin, postfix);

    int result = evaluatePostfix(postfix);

    cout << result << endl;

    return 0;
}
