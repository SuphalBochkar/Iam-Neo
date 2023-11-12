#include <bits/stdc++.h>
using namespace std;

class FactorialCalculator
{
private:
    int *factorialResult;
    int numDigits;

    void calculateFactorial(int n)
    {
        factorialResult = new int[2000]{0};
        factorialResult[0] = 1;
        numDigits = 1;

        for (int i = 2; i <= n; i++)
        {
            int carry = 0;
            for (int j = 0; j < numDigits; j++)
            {
                int product = factorialResult[j] * i + carry;
                factorialResult[j] = product % 10;
                carry = product / 10;
            }

            while (carry > 0)
            {
                factorialResult[numDigits] = carry % 10;
                carry /= 10;
                numDigits++;
            }
        }
    }

public:
    FactorialCalculator(int n)
    {
        if (n < 0)
        {
            cout << "Invalid input";
            factorialResult = nullptr;
            numDigits = 0;
        }
        else if (n == 0)
        {
            factorialResult = new int[1]{1};
            numDigits = 1;
        }
        else
        {
            calculateFactorial(n);
        }
    }

    ~FactorialCalculator()
    {
        delete[] factorialResult;
    }

    int getNumDigits() const
    {
        return numDigits;
    }
};

int main()
{
    int num;
    cin >> num;
    FactorialCalculator *factorial = new FactorialCalculator(num);

    if (factorial->getNumDigits() > 0)
    {
        cout << factorial->getNumDigits();
    }

    delete factorial;
    return 0;
}