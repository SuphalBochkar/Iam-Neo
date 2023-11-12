#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    try
    {
        if (n > 100)
        {
            throw "Out of stock";
            n = 100;
        }

        for (int i = 0; i < n; i++)
        {
            int id;
            cin >> id;
            arr.push_back(id);

            cout << "Eyeglass with ID " << id << " added to the showroom." << endl;
        }

        int q;
        cin >> q;

        if (find(arr.begin(), arr.end(), q) != arr.end())
        {
            cout << "Eyeglass with ID " << q << " sold." << endl;
        }
        else
        {
            throw "Invalid eyeglass ID";
        }
    }
    catch (const char *e)
    {
        if (strcmp(e, "Out of stock") == 0)
        {
            cout << "Exception caught. Error: Eyeglass out of stock." << endl;
        }
        else if (strcmp(e, "Invalid eyeglass ID") == 0)
        {
            cout << "Exception caught. Error: Invalid eyeglass ID." << endl;
        }
        else
        {
            cout << "Exception caught. Error: " << e << endl;
        }
    }

    return 0;
}
