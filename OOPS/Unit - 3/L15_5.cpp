#include <iostream>
using namespace std;

class Solution
{
private:
    int a, b, ans;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    int computeGCD()
    {
        if (a <= 0 || b <= 0)
        {
            return 0;
        }

        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void display()
    {
        cout << computeGCD() << endl;
    }
};

int main()
{
    Solution sol;

    int a, b;
    cin >> a >> b;

    cout << a << " " << b << endl;

    sol.setData(a, b);
    sol.display();

    return 0;
}
