#include <iostream>
using namespace std;

const int MAX_SIZE = 16;

struct Stack
{
    int stackArray[MAX_SIZE];
    int top;

    void init()
    {
        top = -1;
    }

    void push(int value)
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        stackArray[top] = value;
    }

    int pop()
    {
        if (top <= 0)
        {
            cout << "Stack is empty." << endl;
            return -1;
        }

        int x = stackArray[top];
        top--;
        return x;
    }

    void printStack()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << stackArray[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.init();

    int num, value;

    cin >> num;

    if (num >= MAX_SIZE)
    {
        cout << "Stack Overflow" << endl;
        return 0;
    }
    if (num == 0)
    {
        cout << "Stack is empty." << endl;
        return 0;
    }

    for (int i = 0; i < num; i++)
    {
        cin >> value;
        s.push(value);
    }

    s.printStack();

    int x = s.pop();
    cout << "Top element: " << x << endl;

    s.printStack();

    return 0;
}
