#include <bits/stdc++.h>
using namespace std;

struct Line
{
    int x;
    int y;
};

int main()
{

    struct Line arr[2];

    for (int i = 0; i < 2; i++)
    {
        cin >> arr[i].x >> arr[i].y;
    }

    float dis = sqrt(((arr[0].x) - (arr[1].x))^2 + ((arr[0].y) - (arr[1].y))^2);
    
}