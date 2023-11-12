#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string fName;
    string lName;
    int id;

public:
    Person(string first, string last, int idT) : fName(first), lName(last), id(idT) {}

    void printPerson()
    {
        cout << "Name: " << fName << " " << lName << endl;
        cout << "ID: " << id << endl;
    }
};

class Student : public Person
{
private:
    int numScores;
    int *scores;

public:
    Student(string first, string last, int idT, int *scoreArray, int num) : Person(first, last, idT), numScores(num)
    {
        scores = new int[numScores];
        for (int i = 0; i < numScores; i++)
        {
            scores[i] = scoreArray[i];
        }
    }

    char calculate()
    {
        int sum = 0;
        for (int i = 0; i < numScores; i++)
        {
            sum += scores[i];
        }
        int average = sum / numScores;

        if (average >= 90)
            return 'O';
        if (average >= 80)
            return 'E';
        if (average >= 70)
            return 'A';
        if (average >= 55)
            return 'P';
        if (average >= 40)
            return 'D';
        return 'T';
    }
};

int main()
{
    string fName, lName;
    int id, numScores;

    cin >> fName >> lName >> id >> numScores;

    int testScores[10];
    for (int i = 0; i < numScores; i++)
    {
        cin >> testScores[i];
    }

    Student s(fName, lName, id, testScores, numScores);
    s.printPerson();
    cout << "Grade: " << s.calculate() << endl;

    return 0;
}
