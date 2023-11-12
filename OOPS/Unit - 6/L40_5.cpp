#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> patientIDs(N);
    for (int i = 0; i < N; i++)
    {
        cin >> patientIDs[i];
    }
    int M;
    cin >> M;
    std::vector<int> result;
    for (int i = 0; i < N; i++)
    {
        if (patientIDs[i] != M)
        {
            result.push_back(patientIDs[i]);
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    string s = "removeElement vector";
    return 0;
}
