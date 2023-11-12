#include <bits/stdc++.h>
using namespace std;

class stu
{
protected:
    int id;
    char name[20];

public:
    void getstu()
    {
        cin >> id >> name;
    }
};
class marks : public stu
{
protected:
    int m, p, c;
    int spmarks;

public:
    void getmarks()
    {
        cin >> m >> p >> c;
    }
    void getsports()
    {
        cin >> spmarks;
    }
    void show()
    {
        int tot = m + p + c;
        float avg = static_cast<float>(tot) / 3.0;
        cout << "Total=" << tot << endl;
        cout << fixed << setprecision(2);
        cout << "Average=" << avg << endl;
        cout << "Average + Sports marks =" << avg + spmarks << endl;
    }
};
int main()
{
    marks m;
    m.getstu();
    m.getmarks();
    m.getsports();
    m.show();
    return 0;
}