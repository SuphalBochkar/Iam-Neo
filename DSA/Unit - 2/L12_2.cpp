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

// Insert a new seat at the middle of the list
void insertMiddle(Seat *&head, int seatNumber)
{
    Seat *newSeat = createSeat(seatNumber);
    if (!head)
    {
        head = newSeat;
        head->next = head; // Circular reference
    }
    else
    {
        Seat *slow = head;
        Seat *fast = head;

        while (fast->next != head && fast->next->next != head)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        newSeat->next = slow->next;
        slow->next = newSeat;
    }
}

// Insert a new seat at a specified position in the list
void insertAtPosition(Seat *&head, int position, int seatNumber)
{
    if (!head || position <= 0)
    {
        cout << "Invalid position." << endl;
        return;
    }

    Seat *newSeat = createSeat(seatNumber);
    Seat *current = head;
    int currentPosition = 1;

    while (currentPosition < position - 1)
    {
        current = current->next;
        currentPosition++;
    }

    newSeat->next = current->next;
    current->next = newSeat;
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
