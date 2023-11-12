#include <bits/stdc++.h>
using namespace std;

class AdvCalculator
{
public:
    int num;
    AdvCalculator(int n) : num(n) {}
    bool isPrime()
    {
        if (num <= 1)
            return false;
        if (num <= 3)
            return true;
        if (num % 2 == 0 || num % 3 == 0)
            return false;

        for (int i = 5; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
                return false;
        }

        return true;
    }
    int factorial()
    {
        int fact = 1;
        for (int i = 1; i <= num; ++i)
        {
            fact *= i;
        }
        return fact;
    }
};

class Calculator : public AdvCalculator
{
public:
    Calculator(int n) : AdvCalculator(n) {}

    int crossSum(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    void calculate()
    {
        bool prime = isPrime();
        int fact = factorial();
        int sum = crossSum(fact);

        if (prime)
            cout << "Prime number" << endl;
        else
            cout << "Not prime number" << endl;

        cout << fact << endl;
        cout << sum << endl;
    }
};

int main()
{
    int number;
    cin >> number;

    Calculator calc(number);
    calc.calculate();

    return 0;
}
