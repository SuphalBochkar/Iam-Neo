// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int a, b;
//     cin >> a >> b;

//     if (a == n)
//     {
//         cout << "Success" << endl;
//     }
//     else
//     {
//         cout << "Error: Destroying a nonempty datastore" << endl;
//     }

//     if (b == n)
//     {
//         cout << "Success" << endl;
//     }
//     else
//     {
//         cout << "Error: Destroying a nonempty datastore" << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

class DataStore
{
private:
    vector<int> data;

public:
    DataStore() {}

    DataStore(const DataStore &old_datastore) : data(old_datastore.data) {}

    void add(int element)
    {
        data.push_back(element);
    }

    void remove(int numElements)
    {
        if (numElements <= data.size())
        {
            for (int i = 0; i < numElements; ++i)
            {
                data.pop_back();
            }
        }
    }

    // Destructor
    ~DataStore()
    {
        if (!data.empty())
        {
            cout << "Error: Destroying a nonempty datastore" << endl;
        }
    }

    bool isEmpty() const
    {
        return data.empty();
    }

    int getSize() const
    {
        return data.size();
    }
};

int main()
{
    int numElements1, numElements2;
    cin >> numElements1;

    DataStore datastore1;
    for (int i = 0; i < numElements1; ++i)
    {
        int element;
        cin >> element;
        datastore1.add(element);
    }

    cin >> numElements1 >> numElements2;

    DataStore datastore2(datastore1);

    datastore1.remove(numElements1);
    datastore2.remove(numElements2);

    if (datastore1.isEmpty())
    {
        cout << "Success" << endl;
    }

    if (datastore2.isEmpty())
    {
        cout << "Success" << endl;
    }

    return 0;
}
