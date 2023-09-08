#include <bits/stdc++.h>
using namespace std;

int *performArithmetic(int a, int b)
{
    int *sum = new int;
    *sum = a + b;
    return sum;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int *ans = performArithmetic(a, b);

    cout << "Result: " << *ans << endl;
    cout << "Error: Dangling pointer detected!";
}