#include <bits/stdc++.h>
using namespace std;

struct Player
{
    int score;
};

void insertScore(Player heap[], int &heapSize, Player newPlayer)
{
    heap[heapSize] = newPlayer;
    int index = heapSize;
    heapSize++;
    while (index > 0)
    {
        int parent = (index - 1) / 2;
        if (heap[parent].score < heap[index].score)
        {
            swap(heap[parent], heap[index]);
            index = parent;
        }
        else
            break;
    }
}

void printHeap(Player heap[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << heap[i].score << " ";
    }
}

int main()
{
    Player maxHeap[100];
    int heapSize = 0;

    while (true)
    {
        Player newPlayer;
        if (!(cin >> newPlayer.score))
        {
            break;
        }

        insertScore(maxHeap, heapSize, newPlayer);
    }

    printHeap(maxHeap, heapSize);

    return 0;
}