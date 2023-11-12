#include <iostream>
using namespace std;

class Calculator
{
public:
    void fun1(int num1, int num2)
    {
        int sum = num1 + num2;
        cout << sum << endl;
    }

    void fun1(int num1, int num2, int num3)
    {
        int product = num1 * num2 * num3;
        cout << product << endl;
    }
};

int main()
{
    Calculator calc;
    int N;
    cin >> N;

    if (N == 2)
    {
        int num1, num2;
        cin >> num1 >> num2;
        calc.fun1(num1, num2);
    }
    else if (N == 3)
    {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        calc.fun1(num1, num2, num3);
    }
    else
    {
        cout << "Invalid Input" << endl;
    }

    return 0;
}