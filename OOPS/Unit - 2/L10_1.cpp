#include <bits/stdc++.h>
using namespace std;

class Point
{
private:
    float x;
    float y;

public:
    void setData(float x, float y)
    {
        this->x = x;
        this->y = y;
    }
    static float distanceTo(const Point &co1, const Point &co2)
    {
        float xDiff = co2.x - co1.x;
        float yDiff = co2.y - co1.y;

        float dis = xDiff * xDiff + yDiff * yDiff;


        return sqrt(dis);
    }

} co1, co2;

int main()
{
    float a, b;

    cin >> a >> b;
    co1.setData(a, b);

    cin >> a >> b;
    co2.setData(a, b);

    cout << fixed << setprecision(2) << Point::distanceTo(co1, co2);

    return 0;
}