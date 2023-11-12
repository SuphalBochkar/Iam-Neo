#include <bits/stdc++.h>
using namespace std;

struct Bid
{
    int bid_amount;
};

void insertBid(Bid heap[], int &heapSize, Bid newBid)
{
    heap[heapSize] = newBid;    
    int index = heapSize;
    heapSize++;

    while (index > 0)
    {
        int parent = (index - 1) / 2;
        if (heap[parent].bid_amount < heap[index].bid_amount)
        {
            swap(heap[parent], heap[index]);
            index = parent;
        }
        else
            break;
    }
}

void printHeap(Bid binaryHeap[], int heapSize)
{
    for (int i = 0; i < heapSize; i++)
    {
        cout << binaryHeap[i].bid_amount << " ";
    }
    cout << endl;
}

int main()
{
    int maxSize = 100;
    Bid binaryHeap[maxSize];
    int heapSize = 0;

    while (true)
    {
        Bid newBid;
        if (!(cin >> newBid.bid_amount))
        {
            break;
        }

        if (heapSize < maxSize)
        {
            insertBid(binaryHeap, heapSize, newBid);
        }
        else
        {
            cout << "Heap is full. Cannot insert more bids." << endl;
        }
    }

    printHeap(binaryHeap, heapSize);

    return 0;
}