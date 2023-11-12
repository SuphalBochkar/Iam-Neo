#include <bits/stdc++.h>
using namespace std;

#define MAX_NAME_LENGTH 50
#define MAX_COURSES 20
class Student;
class Course
{
public:
    char name[MAX_NAME_LENGTH];
    int grade;
    Student *student;
    Course() : student(nullptr) {}
};

class Student
{
public:
    char name[MAX_NAME_LENGTH];
    Course courses[MAX_COURSES];
    int num_courses;
    Student() : num_courses(0) {}
    void add_course(const char *courseName, int grade)
    {
        if (num_courses >= MAX_COURSES)
        {
            cout << "Maximum number of courses reached." << endl;
            return;
        }
        strcpy(courses[num_courses].name, courseName);
        courses[num_courses].grade = grade;
        courses[num_courses].student = this;
        num_courses++;
    }

    void print_student() const
    {
        cout << "Name: " << name << endl;
        cout << "Courses:" << endl;
        for (int i = 0; i < num_courses; i++)
        {
            cout << " " << courses[i].name << ": " << courses[i].grade << endl;
        }
    }
};

int main()
{
    Student student;
    cin.getline(student.name, MAX_NAME_LENGTH);
    int num_courses;
    cin >> num_courses;
    cin.ignore();

    for (int i = 0; i < num_courses; i++)
    {
        char name[MAX_NAME_LENGTH];
        int grade;
        cin.getline(name, MAX_NAME_LENGTH);
        cin >> grade;
        cin.ignore();
        student.add_course(name, grade);
    }
    student.print_student();
    return 0;
}
