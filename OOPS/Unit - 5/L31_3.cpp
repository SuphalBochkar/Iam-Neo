#include <bits/stdc++.h>
using namespace std;

void bubbleSort(string arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{

    int n;
    cin >> n;
    cin.ignore();

    string *words = new string[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        words[i] = s;
    }

    bubbleSort(words, n);

    for (int i = 0; i < n; i++)
    {
        cout << words[i] << " ";
    }

    delete[] words;
    return 0;
}
