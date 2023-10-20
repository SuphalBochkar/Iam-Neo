#include <bits/stdc++.h>
using namespace std;

class Sol
{
public:
    int w, h;
    Sol(int width, int height) : w(width), h(height) {}
    void operator==(Sol other)
    {
        bool ans;
        if (w == other.w && h == other.h)
            ans = true;
        else
            ans = false;

        if (ans)
            cout << "Rectangle 1 and Rectangle 2 are equal in size." << endl;
        else
            cout << "Rectangle 1 and Rectangle 2 are not equal in size." << endl;
    }
};

int main()
{
    int w1, w2, h1, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    Sol s1(w1, h1), s2(w2, h2);

    s1 == s2;

    return 0;
}