#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int id;
    vector<int> marks;
};

int main()
{
    int N;
    cin >> N;

    ofstream outfile("marks.dat");

    for (int i = 0; i < N; ++i)
    {
        Student student;
        cin >> student.id;

        student.marks.resize(5);
        for (int j = 0; j < 5; ++j)
        {
            cin >> student.marks[j];
        }

        outfile << student.id << ',';
        for (int j = 0; j < 4; ++j)
        {
            outfile << student.marks[j] << ',';
        }
        outfile << student.marks[4] << ',' << endl;
    }

    outfile.close();

    ifstream infile("marks.dat");
    if (!infile.is_open())
    {
        cerr << "Error: Unable to open the file for reading." << endl;
        return 1;
    }

    string line;
    while (getline(infile, line))
    {
        cout << line << endl;
    }

    infile.close();

    return 0;
}
