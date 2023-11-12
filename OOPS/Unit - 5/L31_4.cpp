#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, d;
    cin >> n >> a >> d;
    int *sum = new int;
    *sum = (int)(n / 2) * ((2 * a) + ((n - 1) * d));
    cout << *sum;
    delete sum;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, d;
    cin >> n >> a >> d;
    int *sum = new int;
    *sum = (n / 2) * ((2 * a) + ((n - 1) * d));
    cout << *sum;
    delete sum;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n, a, d;
    cin >> n >> a >> d;

    int *ap = new int[n];
    for (int i = 0; i < n; i++)
    {
        ap[i] = a + i * d;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ap[i];
    }

    cout << sum << endl;
    delete[] ap;
    return 0;
}
