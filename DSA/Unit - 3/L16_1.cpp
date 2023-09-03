#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int evaluatePostfix(const string &postfix)
{
    stack<int> s;
    string token;

    for (char c : postfix)
    {
        if (isspace(c))
        {
            if (!token.empty())
            {
                s.push(stoi(token));
                token.clear();
            }
        }
        else if (isdigit(c))
        {
            token += c;
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

    if (!token.empty())
    {
        s.push(stoi(token));
    }

    if (!s.empty())
    {
        return s.top();
    }
    else
    {
        cerr << "Invalid postfix expression" << endl;
        exit(1);
    }
}

int main()
{
    string postfix;
    getline(cin, postfix);

    int result = evaluatePostfix(postfix);

    cout << "The result is: " << result << endl;

    return 0;
}
