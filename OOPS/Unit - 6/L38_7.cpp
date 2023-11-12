#include <bits/stdc++.h>
using namespace std;

const int MAX_STUDENTS = 20;

class UnsupportedDestinationException : public exception
{
public:
    const char *what() const noexcept
    {
        return "Exception caught. Error: Unsupported destination.";
    }
};

class InsufficientSeatsException : public exception
{
public:
    const char *what() const noexcept
    {
        return "Exception caught. Error: Insufficient seats.";
    }
};

class InvalidGradeException : public exception
{
public:
    const char *what() const noexcept
    {
        return "Exception caught. Error: Invalid grade. Grade should be between A and E.";
    }
};

class StudentNotFoundException : public exception
{
public:
    const char *what() const noexcept
    {
        return "Exception caught. Error: Student not found in the class roster.";
    }
};

class ClassRoster
{
public:
    ClassRoster() : students() {}

    void addStudent(const string &studentName)
    {
        if (students.size() < MAX_STUDENTS)
        {
            students.push_back(studentName);
            cout << "Student " << studentName << " added to the class roster." << endl;
        }
        else
        {
            cout << "Class roster is full. Cannot add more students." << endl;
        }
    }

    void updateGrade(const string &studentName, const string &grade)
    {
        auto it = find(students.begin(), students.end(), studentName);
        if (it != students.end())
        {
            if (grade.size() == 1 && grade >= "A" && grade <= "E")
            {
                cout << "Grade for student " << studentName << " updated to " << grade << "." << endl;
            }
            else
            {
                throw InvalidGradeException();
            }
        }
        else
        {
            throw StudentNotFoundException();
        }
    }

private:
    vector<string> students;
};

int main()
{
    ClassRoster roster;

    int numStudents;
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i)
    {
        string studentName;
        cin >> studentName;
        roster.addStudent(studentName);
    }

    string updateStudentName, grade;
    cin >> updateStudentName >> grade;

    try
    {
        roster.updateGrade(updateStudentName, grade);
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}
