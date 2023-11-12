#include <iostream>
#include <string>

using namespace std;

class SilverStall
{
protected:
    string name;
    string detail;
    string owner;
    int cost;

public:
    SilverStall() {}
    SilverStall(string n, string d, string o, int c) : name(n), detail(d), owner(o), cost(c) {}

    int getTotalCost()
    {
        return cost;
    }
};

class GoldStall : public SilverStall
{
public:
    int tvSet;

    GoldStall() {}
    GoldStall(string n, string d, string o, int c, int t) : SilverStall(n, d, o, c), tvSet(t) {}

    int getTotalCost()
    {
        return cost + (tvSet * 100);
    }
};

class PlatinumStall : public GoldStall
{
private:
    int projector;

public:
    PlatinumStall() {}
    PlatinumStall(string n, string d, string o, int c, int t, int p) : GoldStall(n, d, o, c, t), projector(p) {}

    int getTotalCost()
    {
        return cost + (tvSet * 100) + (projector * 500);
    }
};

class Main
{
public:
    static void main()
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            string name, detail, owner;
            int cost;
            cin.ignore();
            getline(cin, name);
            getline(cin, detail);
            getline(cin, owner);
            cin >> cost;

            SilverStall silverStall(name, detail, owner, cost);
            cout << silverStall.getTotalCost() << endl;
        }
        else if (n == 2)
        {
            string name, detail, owner;
            int cost, tvSet;
            cin.ignore();
            getline(cin, name);
            getline(cin, detail);
            getline(cin, owner);
            cin >> cost >> tvSet;

            GoldStall goldStall(name, detail, owner, cost, tvSet);
            cout << goldStall.getTotalCost() << endl;
        }
        else if (n == 3)
        {
            string name, detail, owner;
            int cost, tvSet, projector;
            cin.ignore();
            getline(cin, name);
            getline(cin, detail);
            getline(cin, owner);
            cin >> cost >> tvSet >> projector;

            PlatinumStall platinumStall(name, detail, owner, cost, tvSet, projector);
            cout << platinumStall.getTotalCost() << endl;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
};

int main()
{
    Main::main();
    return 0;
}
