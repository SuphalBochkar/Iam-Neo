#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    int num;
};
class Child : public Parent
{
public:
    void fun()
    {
        int i, j, k = 0, sum = 0;
        int a[10];
        while (num != 0)
        {
            i = num % 10;
            a[k++] = i;
            num = num / 10;
        }
        if (k == 1)
        {
            cout << a[0];
            return;
        }
        for (i = 0; i < k - 1; i++)
            for (j = i + 1; j < k; j++)
                sum = sum + a[i] + a[j];
        cout << sum;
    }
};
int main()
{
    Child c;
    cin >> c.num;
    c.fun();
}