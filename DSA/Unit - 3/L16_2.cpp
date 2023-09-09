#include <bits/stdc++.h>
using namespace std;

int getPrecedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

string infixToPostfix(const string &infix)
{
    stack<char> s;
    string postfix = "";

    for (char ch : infix)
    {
        if (ch == ' ')
            continue;

        //! Open Bracket (
        if (ch == '(')
        {
            s.push(ch);
        }

        //! Operand (a, b, c)
        else if (isalnum(ch))
        {
            postfix += ch;
        }

        //! Close Bracket )
        else if (ch == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.empty() && getPrecedence(ch) <= getPrecedence(s.top()))
            {
                postfix += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }

    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main()
{
    string infix;
    getline(cin, infix);

    string postfix = infixToPostfix(infix);

    cout << "The RPN is: " << postfix << endl;

    return 0;
}