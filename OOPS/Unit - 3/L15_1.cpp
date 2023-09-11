#include <bits/stdc++.h>
using namespace std;

class GradeBook
{
private:
    string courseName, instructorName;

public:
    GradeBook() : courseName(""), instructorName("") {}

    void getData()
    {
        getline(cin, courseName);
        getline(cin, instructorName);
    }

    void display()
    {
        cout << "Welcome to the grade book for " << courseName << "!" << endl;
        cout << "This course is presented by: " << instructorName << endl;
    }
};

int main()
{
    // GradeBook gb;
    // gb.getData();
    // gb.display();

    string courseName, instructorName;
    getline(cin, courseName);
    getline(cin, instructorName);
    cin.ignore();

    cout << "Welcome to the grade book for " << courseName << "!" << endl;
    cout << "This course is presented by: " << instructorName << endl;

    return 0;
}
