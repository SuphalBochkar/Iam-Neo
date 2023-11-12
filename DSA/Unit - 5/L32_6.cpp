#include <bits/stdc++.h>
using namespace std;

struct Location
{
    int distance;
};

void insertLocation(Location heap[], int &heapSize, Location newLocation)
{
    heap[heapSize] = newLocation;
    int index = heapSize;
    heapSize++;

    while (index > 0)
    {
        int parent = (index - 1) / 2;
        if (heap[parent].distance > heap[index].distance)
        {
            swap(heap[parent], heap[index]);
            index = parent;
        }
        else
            break;
    }
}

void printHeap(Location m[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << m[i].distance << " ";
    }
}

int main()
{
    Location minHeap[100];
    int heapSize = 0;

    while (true)
    {
        Location newLocation;
        if (!(cin >> newLocation.distance))
        {
            break;
        }

        if (heapSize < 100)
        {
            insertLocation(minHeap, heapSize, newLocation);
        }
        else
        {
            cout << "Heap is full. Cannot insert more locations." << endl;
        }
    }

    printHeap(minHeap, heapSize);

    return 0;
}