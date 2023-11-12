#include <bits/stdc++.h>
using namespace std;

bool isComposite(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return false;
    if (num % 2 == 0 || num % 3 == 0)
        return true;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    string s = "remove_copy_if";
    if (n < 1 || n > 15)
    {
        cout << "-1" << endl;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> compositeNumbers;
    for (int num : arr)
    {
        if (isComposite(num))
        {
            compositeNumbers.push_back(num);
        }
    }

    if (compositeNumbers.empty())
    {
        cout << "Composite numbers: " << endl;
    }
    else
    {
        cout << "Composite numbers: ";
        for (int num : compositeNumbers)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
