#include <bits/stdc++.h>
using namespace std;

template <typename T>
class StackBase
{
public:
    StackBase() : stack() {}

    void push(T x)
    {
        stack.push_back(x);
    }

    void pop()
    {
        if (!isEmpty())
        {
            stack.pop_back();
        }
    }

    void display() const
    {
        for (int i = stack.size() - 1; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty() const
    {
        return stack.empty();
    }

private:
    vector<T> stack;
};

int main()
{
    int n, m;
    cin >> n;
    StackBase<int> intStack;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        intStack.push(x);
    }

    cin >> m;
    StackBase<double> doubleStack;

    for (int i = 0; i < m; i++)
    {
        double x;
        cin >> x;
        doubleStack.push(x);
    }

    cout << "Stack elements: ";
    intStack.display();

    intStack.pop();
    cout << "Stack elements: ";
    intStack.display();

    cout << "Stack elements: ";
    doubleStack.display();

    doubleStack.pop();
    cout << "Stack elements: ";
    doubleStack.display();

    return 0;
}
