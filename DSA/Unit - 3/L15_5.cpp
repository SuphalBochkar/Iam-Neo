#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 10;

class Stack
{
public:
    int stackArray[MAX_SIZE];
    int top;
    float sum = 0.0;

    void init()
    {
        top = -1;
    }

    void push(int val)
    {
        top++;
        stackArray[top] = val;
        sum += val;
    }

    void pop(int &x)
    {
        x = stackArray[top];
        top--;
        sum -= x;
    }

    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << stackArray[i] << " ";
        }
        cout << endl;
    }

    float average()
    {
        return sum / float(top + 1);
    }

    bool checkEmpty()
    {
        return top < 0;
    }
};

int main()
{

    Stack s;
    s.init();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.push(a);
    }

    // Display the stack elements
    s.print();

    // Print the average of the stack
    if (s.checkEmpty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Average of the stack values: " << fixed << setprecision(2) << s.average() << endl;
    }

    // Pop an element and print it
    if (s.checkEmpty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        int x = 0;
        s.pop(x);
        cout << "Popped value: " << x << endl;
    }

    // Print average after popping
    if (s.checkEmpty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Average of the stack values: " << fixed << setprecision(2) << s.average() << endl;
    }
    return 0;
}