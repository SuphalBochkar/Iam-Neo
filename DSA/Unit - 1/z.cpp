#include <bits/stdc++.h>
using namespace std;

class NumberReverse
{
public:
    int reverse(int n)
    {
        int reversed = 0;
        while (n > 0)
        {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        return reversed;
    }
};

int reverse(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main()
{
    NumberReverse nr;

    int input1 = 12340;
    int output1 = reverse(input1);
    std::cout << "Input 1: " << input1 << "\nOutput 1: " << output1 << std::endl;

    int input2 = 3233;
    int output2 = nr.reverse(input2);
    std::cout << "Input 2: " << input2 << "\nOutput 2: " << output2 << std::endl;

    int input3 = 1050;
    int output3 = nr.reverse(input3);
    std::cout << "Input 3: " << input3 << "\nOutput 3: " << output3 << std::endl;

    return 0;

    vector<int> arr;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    for (int i : arr)
    {
        cout << i;
    }
}
