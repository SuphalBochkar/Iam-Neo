#include <bits/stdc++.h>
using namespace std;
#define SIZE 100

class Sol
{
public:
    int front = 0, rear = -1;
    int queue[SIZE];
    float sum = 0;

    void enqueue(int val)
    {
        if (rear == SIZE - 1)
        {
            return;
        }
        else
        {
            queue[++rear] = val;
            sum += val;
        }
    }
    float ave()
    {
        if (rear == -1)
        {
            return 0.0;
        }
        float ans = sum / float(rear + 1);
        return ans;
    }

} s;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.enqueue(a);
    }
    if (n == 0)
    {
        cout << "Queue is empty." << endl;
        return 0;
    }
    cout << fixed << setprecision(2) << s.ave();
    return 0;
}
