#include <iostream>
using namespace std;
class Base
{
public:
    virtual void game() = 0;
};
class Derived : public Base
{
public:
    char a, b, c, d;
    int s = 0;
    void game() override
    {
        if (a >= 'A' && a <= 'Z')
        {
            s = s + 10;
        }
        else
        {
            s = s - 5;
        }
        if (b >= 'A' && b <= 'Z')
        {
            s = s + 10;
        }
        else
        {
            s = s - 5;
        }
        cout << "Score : " << s;
    }
};
int main()
{
    Derived dd;
    cin >> dd.a >> dd.b;
    dd.game();
    return 0;
}