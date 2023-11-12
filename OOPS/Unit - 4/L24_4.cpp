#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Fra
{
public:
    int n;
    int d;

    Fra(int num, int den)
    {
        n = num;
        d = den;
    }

    void reduce()
    {
        int Div = gcd(n, d);
        n /= Div;
        d /= Div;
    }

    Fra operator*(const Fra &other) const
    {
        Fra result(n * other.n, d * other.d);
        result.reduce();
        return result;
    }
};

int main()
{
    int num1, den1, num2, den2;

    cin >> num1 >> den1;

    cin >> num2 >> den2;

    Fra Fra1(num1, den1);
    Fra Fra2(num2, den2);

    Fra result = Fra1 * Fra2;

    cout << "The result of multiplication is: " << result.n << '/' << result.d << endl;

    return 0;
}
