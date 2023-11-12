#include <bits/stdc++.h>
using namespace std;

template <typename T>
void concatenateArrays(T arr1[], T arr2[], T result[], int size)
{
    for (int i = 0; i < size; i++)
    {
        result[i] = arr1[i] + arr2[i];
    }
}

template <typename T>
string concatenateStrings(T s1, T s2, const string &delimiter)
{
    stringstream ss;
    ss << s1 << delimiter << s2;
    return ss.str();
}

int main()
{
    int arr1[3], arr2[3], result[3];
    string s1, s2, delimiter;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> arr2[i];
    }
    cin >> s1 >> s2 >> delimiter;
    concatenateArrays(arr1, arr2, result, 3);
    string concatenatedString = concatenateStrings(s1, s2, delimiter);
    cout << "Concatenated array:";
    for (int i = 0; i < 3; i++)
    {
        cout << " " << result[i];
    }
    cout << endl;
    cout << "Concatenated string: " << concatenatedString << endl;
    return 0;
}
