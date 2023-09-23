// #include <bits/stdc++.h>
// using namespace std;

// struct Packet
// {
//     int priority;
//     string data;

//     Packet(int prio, const string &dat) : priority(prio), data(dat) {}

//     bool operator<(const Packet &other) const
//     {
//         return priority > other.priority;
//     }
// };

// int main()
// {
//     int maxCapacity, numPackets;
//     cin >> maxCapacity;
//     cin >> numPackets;

//     priority_queue<Packet> packetQueue;

//     for (int i = 0; i < numPackets; i++)
//     {
//         int priority;
//         cin >> priority;

//         cin.ignore();
//         string data;
//         getline(cin, data);

//         Packet packet(priority, data);
//         packetQueue.push(packet);
//     }

//     cout << "Processing packets based on priority:" << endl;

//     while (!packetQueue.empty())
//     {
//         Packet packet = packetQueue.top();
//         cout << "Processing packet with priority " << packet.priority << " and data: " << packet.data << endl;
//         packetQueue.pop();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Packet
{
public:
    int prio;
    string data;

    Packet(int p, const string &d) : prio(p), data(d) {}

    bool operator<(const Packet &other) const
    {
        return prio > other.prio;
    }
};

class Sol
{
public:
    int cap;
    int num;
    priority_queue<Packet> pq;

    Sol(int c, int n) : cap(c), num(n) {}

    void processPackets()
    {
        for (int i = 0; i < num; i++)
        {
            int p;
            cin >> p;
            cin.ignore();
            string d;
            getline(cin, d);
            Packet packet(p, d);
            pq.push(packet);
        }
    }

    void display()
    {
        cout << "Processing packets based on priority:" << endl;
        while (!pq.empty())
        {
            Packet packet = pq.top();
            cout << "Processing packet with priority " << packet.prio << " and data: " << packet.data << endl;
            pq.pop();
        }
    }
};

int main()
{
    int c, n;
    cin >> c >> n;

    Sol s(c, n);
    s.processPackets();
    s.display();

    return 0;
}
