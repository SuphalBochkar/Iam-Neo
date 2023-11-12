#include <bits/stdc++.h>
using namespace std;

class LuckyChecker
{
private:
    int *arr;
    int n;

public:
    LuckyChecker()
    {
        n = 0;
        arr = nullptr;
    }
    LuckyChecker(int size, int *numbers)
    {
        n = size;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = numbers[i];
        }
    }
    ~LuckyChecker()
    {
        delete[] arr;
    }
    bool isLucky(int num)
    {
        bool *digitSeen = new bool[10];
        for (int i = 0; i < 10; i++)
            digitSeen[i] = false;
        while (num > 0)
        {
            int digit = num % 10;
            if (digitSeen[digit])
            {
                delete[] digitSeen;
                return false;
            }
            digitSeen[digit] = true;
            num = num / 10;
        }
        delete[] digitSeen;
        return true;
    }
};

int main()
{
    int n;
    cin >> n;
    int *numbers = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    LuckyChecker luckyChecker(n, numbers);
    for (int i = 0; i < n; i++)
    {
        luckyChecker.isLucky(numbers[i]) ? cout << numbers[i] << " is Lucky \n" : cout << numbers[i] << " is not Lucky \n";
    }
    delete[] numbers;
    return 0;
}
