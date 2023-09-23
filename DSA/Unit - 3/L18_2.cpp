#include <bits/stdc++.h>
using namespace std;

//! My Code
struct packet
{
    string destination;
    int priority;
    packet(string s, int a) : destination(s), priority(a) {}
};

class Sol
{
public:
    queue<packet> box;

    void addPack()
    {
        if (box.size() < 5)
        {
            cin.ignore();
            string dest;
            int prio;

            getline(cin, dest);
            cin >> prio;

            if (prio >= 1 && prio <= 5)
            {
                cout << "Package added to the delivery queue." << endl;

                packet newPacket(dest, prio);
                queue<packet> tempQueue;

                while (!box.empty() && box.front().priority <= prio)
                {
                    tempQueue.push(box.front());
                    box.pop();
                }
                tempQueue.push(newPacket);
                while (!box.empty())
                {
                    tempQueue.push(box.front());
                    box.pop();
                }
                box = tempQueue;
            }
            else
            {
                cout << "Invalid priority. Priority must be between 1 and 5." << endl;
            }
        }
        else
        {
            cout << "Queue is full. Cannot add more packages." << endl;
        }
    }

    void deliverPack()
    {
        if (!box.empty())
        {
            cout << "Delivered package to: " << box.front().destination << endl;
            box.pop();
        }
        else
        {
            cout << "No packages in the delivery queue." << endl;
        }
    }

    void viewPack()
    {
        if (!box.empty())
        {
            cout << "Next package for delivery: " << box.front().destination << endl;
        }
        else
        {
            cout << "No packages in the delivery queue." << endl;
        }
    }
};

int main()
{
    Sol s;
    int choice;
    while (cin >> choice)
    {
        switch (choice)
        {
        case 1:
            s.addPack();
            break;
        case 2:
            s.deliverPack();
            break;
        case 3:
            s.viewPack();
            break;
        case 4:
            cout << "Exiting the application." << endl;
            exit(0);
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }
    return 0;
}

// !------------------------ Sol ------------------------------------
#include <bits/stdc++.h>
using namespace std;

struct packet
{
    string destination;
    int priority;
    packet(string s, int a) : destination(s), priority(a) {}

    bool operator<(const packet &other) const
    {
        return priority > other.priority;
    }
};

class Sol
{
public:
    priority_queue<packet> box;

    void addPack()
    {
        if (box.size() < 5)
        {
            cin.ignore();
            string dest;
            int prio;

            getline(cin, dest);
            cin >> prio;

            if (prio >= 1 && prio <= 5)
            {
                box.push(packet(dest, prio));
                cout << "Package added to the delivery queue." << endl;
            }
            else
            {
                cout << "Invalid priority. Priority must be between 1 and 5." << endl;
            }
        }
        else
        {
            cout << "Queue is full. Cannot add more packages." << endl;
        }
    }

    void deliverPack()
    {
        if (!box.empty())
        {
            cout << "Delivered package to: " << box.top().destination << endl;
            box.pop();
        }
        else
        {
            cout << "No packages in the delivery queue." << endl;
        }
    }

    void viewPack()
    {
        if (!box.empty())
        {
            cout << "Next package for delivery: " << box.top().destination << endl;
        }
        else
        {
            cout << "No packages in the delivery queue." << endl;
        }
    }
};

int main()
{
    Sol s;
    int choice;
    while (cin >> choice)
    {
        switch (choice)
        {
        case 1:
            s.addPack();
            break;
        case 2:
            s.deliverPack();
            break;
        case 3:
            s.viewPack();
            break;
        case 4:
            cout << "Exiting the application." << endl;
            exit(0);
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }
    return 0;
}
