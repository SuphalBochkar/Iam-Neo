#include <iostream>
#include <iomanip>

using namespace std;

class stu
{
protected:
    int id;
    char name[21];

public:
    void getstu()
    {
        cin >> id >> name;
    }
};

class marks : public stu
{
protected:
    int m, p, c, spmarks;

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
        int total = m + p + c;
        float average = total / 3.0;
        float final_result = average + spmarks;

        cout << "Total=" << total << endl;
        cout << "Average=" << fixed << setprecision(2) << average << endl;
        cout << "Average + Sports marks=" << final_result << endl;
    }
};

int main()
{
    marks student;
    student.getstu();
    student.getmarks();
    student.getsports();
    student.show();

    return 0;
}
