// #include <bits/stdc++.h>
// using namespace std;

// bool isPrime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// bool isFactor(int n, int a)
// {
//     if (a == 0)
//         return false;
//     return (n % a == 0);
// }

// int main()
// {

//     int n;
//     cin >> n;

//     int *arr = new int[n];
//     int p = 0;
//     bool flag = false;
//     for (int i = 0; i <= n; i++)
//     {
//         if (isFactor(n, i) && isPrime(i))
//         {
//             arr[p] = i;
//             p++;
//             flag = true;
//         }
//     }

//     int e = INT_MIN;

//     if (!flag)
//     {
//         cout << "No prime factors found for " << n;
//         return 0;
//     }

//     cout << "Prime factors of " << n << " are: ";
//     for (int i = 0; i < p; i++)
//     {
//         e = max(e, arr[i]);
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Largest prime factor of " << n << " is: " << e << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isFactor(int n, int a)
{
    if (a == 0)
        return false;
    return (n % a == 0);
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    int p = 0;
    bool flag = false;
    for (int i = 2; i <= n; i++)
    {
        if (isFactor(n, i) && isPrime(i))
        {
            arr[p] = i;
            p++;
            flag = true;
        }
    }

    if (!flag)
    {
        cout << "No prime factors found for " << n << endl;
    }
    else
    {
        cout << "Prime factors of " << n << " are: ";
        for (int i = 0; i < p; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        int e = arr[p - 1];
        cout << "Largest prime factor of " << n << " is: " << e << endl;
    }

    delete[] arr;
    return 0;
}