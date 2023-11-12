#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(const string &name, int age) : name(name), age(age)
    {
        cout << "Person constructor called: " << name << endl;
    }
    virtual ~Person()
    {
        cout << "Person destructor called: " << name << endl;
    }
    int getAge() const
    {
        return age;
    }
};
class Student : public Person
{
public:
    Student(const string &name, int age) : Person(name, age)
    {
        cout << "Student constructor called: " << name << endl;
    }
    ~Student()
    {
        cout << "Student destructor called: " << name << endl;
    }
};
class Teacher : public Person
{
private:
    string subject;

public:
    Teacher(const string &name, int age) : Person(name, age)
    {
        cout << "Teacher constructor called: " << name << endl;
    }
    ~Teacher()
    {
        cout << "Teacher destructor called: " << name << endl;
    }
};
int main()
{
    int totalStudentAge = 0;
    int totalTeacherAge = 0;
    int numStudents = 0;
    int numTeachers = 0;
    string name;
    int age;
    while (true)
    {
        cin >> name;
        if (name == "q")
            break;
        cin >> age;
        Student student(name, age);
        totalStudentAge += age;
        numStudents++;
    }
    while (true)
    {
        cin >> name;
        if (name == "q")
            break;
        cin >> age;
        Teacher teacher(name, age);
        totalTeacherAge += age;
        numTeachers++;
    }
    double avgStudentAge = numStudents > 0 ? static_cast<double>(totalStudentAge) / numStudents : 0.0;
    double avgTeacherAge = numTeachers > 0 ? static_cast<double>(totalTeacherAge) / numTeachers : 0.0;
    cout << "Average Student Age: " << avgStudentAge << endl;
    cout << "Average Teacher Age: " << avgTeacherAge;
    return 0;
}