#include <bits/stdc++.h>
using namespace std;

#define maxSize 100
struct Job
{
    int processing_time;
};

void swap(struct Job *a, struct Job *b)
{
    struct Job temp = *a;
    *a = *b;
    *b = temp;
}

void maxHeapify(struct Job heap[], int i, int heapSize)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < heapSize && heap[left].processing_time > heap[largest].processing_time)
        largest = left;

    if (right < heapSize && heap[right].processing_time > heap[largest].processing_time)
        largest = right;

    if (largest != i)
    {
        swap(&heap[i], &heap[largest]);
        maxHeapify(heap, largest, heapSize);
    }
}

void insertJob(struct Job heap[], int *heapSize, struct Job newJob)
{
    if (*heapSize == maxSize)
    {
        printf("Heap is full. Cannot insert job.\n");
        return;
    }

    int i = *heapSize;
    heap[i] = newJob;
    *heapSize = *heapSize + 1;

    while (i > 0 && heap[(i - 1) / 2].processing_time < heap[i].processing_time)
    {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(struct Job heap[], int heapSize)
{
    for (int i = 0; i < heapSize; i++)
    {
        printf("%d ", heap[i].processing_time);
    }
    printf("\n");
}

int main()
{
    struct Job jobHeap[maxSize];
    int heapSize = 0;

    while (1)
    {
        struct Job newJob;
        if (scanf("%d", &newJob.processing_time) != 1)
        {
            break;
        }

        insertJob(jobHeap, &heapSize, newJob);
    }
    printHeap(jobHeap, heapSize);

    return 0;
}