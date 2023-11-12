#include <bits/stdc++.h>
using namespace std;

class QuizGame
{
public:
    virtual void game() = 0;
};

class StudentScore : public QuizGame
{
public:
    void game() override
    {
        int score = 0;

        for (int i = 0; i < 4; i++)
        {
            char playerAnswer;
            cin >> playerAnswer;
            if (isupper(playerAnswer))
                score += 10;
            else if (islower(playerAnswer))
                score -= 5;
        }

        cout << "Score : " << score << endl;
    }
};

int main()
{
    StudentScore student;
    student.game();
    return 0;
}
