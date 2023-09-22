#include <iostream>
using namespace std;

// Structure for the seat node in the circular linked list
struct Seat
{
    int seatNumber;
    Seat *next;
};

int main()
{
    int n, middleSeat, position, seat;
    cin >> n;

    Seat *head = nullptr;

    for (int i = 0; i < n; i++)
    {
        cin >> seat;
        insertFront(head, seat);
    }

    cin >> middleSeat;
    insertMiddle(head, middleSeat);

    cin >> position >> seat;
    insertAtPosition(head, position, seat);

    cout << "After inserting at middle:" << endl;
    displayCircularList(head);

    cout << "After inserting at position:" << endl;
    displayCircularList(head);

    return 0;
}
