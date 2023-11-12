#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int rollNumber;
    string name;
    int grades[3];
};

int main()
{
    vector<Student> database;
    string s = "class vector";
    while (true)
    {
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            Student student;
            cin >> ws;
            getline(cin, student.name);
            cin >> student.rollNumber;
            database.push_back(student);
        }
        else if (choice == 2)
        {
            int rollNumber;
            cin >> rollNumber;
            auto it = find_if(database.begin(), database.end(), [rollNumber](const Student &student)
                              { return student.rollNumber == rollNumber; });
            if (it != database.end())
            {
                cin >> it->grades[0] >> it->grades[1] >> it->grades[2];
            }
            else
            {
                cout << "Student with Roll Number " << rollNumber << " not found." << endl;
            }
        }
        else if (choice == 3)
        {
            int rollNumber;
            cin >> rollNumber;
            auto it = find_if(database.begin(), database.end(), [rollNumber](const Student &student)
                              { return student.rollNumber == rollNumber; });
            if (it != database.end())
            {
                cout << "Name: " << it->name << endl;
                cout << "Roll Number: " << it->rollNumber << endl;
                cout << "Grades: " << it->grades[0] << " " << it->grades[1] << " " << it->grades[2] << endl;
            }
            else
            {
                cout << "Student with Roll Number " << rollNumber << " not found." << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "Exiting the program." << endl;
            break;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
