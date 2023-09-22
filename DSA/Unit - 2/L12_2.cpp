#include <iostream>
using namespace std;

// Structure for the seat node in the circular linked list
struct Seat
{
    int seatNumber;
    Seat *next;
};

// Create a new seat node
Seat *createSeat(int seatNumber)
{
    Seat *newSeat = new Seat;
    newSeat->seatNumber = seatNumber;
    newSeat->next = nullptr;
    return newSeat;
}

// Insert a new seat at the front of the list
void insertFront(Seat *&head, int seatNumber)
{
    Seat *newSeat = createSeat(seatNumber);
    if (!head)
    {
        head = newSeat;
        head->next = head; // Circular reference
    }
    else
    {
        newSeat->next = head->next;
        head->next = newSeat;
    }
}

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
