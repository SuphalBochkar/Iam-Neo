#include <bits/stdc++.h>
using namespace std;

class WeatherData
{
private:
    double t;

public:
    WeatherData(double val) : t(val) {}

    void operator+()
    {
        double ans = (t * 9.0 / 5.0 + 32) * 10 / 10;
        cout << ans << "°F" << endl;
    }

    void operator-()
    {
        double ans = (t * 9.0 / 5.0 + 32) * 10 / 10;
        cout << ans << "°F" << endl;
    }
};

int main()
{
    double a;
    cin >> a;

    WeatherData w(a);

    +w;
    -w;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class WeatherData
{
private:
    double t;

public:
    WeatherData(double val) : t(val) {}

    void operator+()

    {
        double ans = (t * 9.0 / 5.0 + 32);
        cout << ans << "°F" << endl;
    }

    void operator-()

    {
        if (celsius >= 0)
        {
            customUnit = 108.2 * (celsius / 25.5);
        }
        else
        {
            customUnit = 57.0 * (celsius / -25.5);
        }
        cout << ans << "°F" << endl;
    }
};

int main()
{
    double a;
    cin >> a;

    WeatherData w(a);

    +w;
    -w;

    return 0;
}
