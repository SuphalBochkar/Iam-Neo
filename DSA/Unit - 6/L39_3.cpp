#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

int calHash(int key, int size)
{
    return key % size;
}

int main()
{
    int size, numKeys;
    scanf("%d", &size);
    scanf("%d", &numKeys);

    int keys[numKeys];
    int hashTable[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        hashTable[i] = -1;
    }

    for (int i = 0; i < numKeys; ++i)
    {
        scanf("%d", &keys[i]);
    }

    for (int i = 0; i < numKeys; ++i)
    {
        int index = calHash(keys[i], size);
        int originalIndex = index;

        while (hashTable[index] != -1)
        {
            index = (index + 1) % size;

            if (index == originalIndex)
            {
                printf("Table is full!\n");
                return 1;
            }
        }
        hashTable[index] = keys[i];
        printf("%d ", index);
    }

    printf("\n");

    return 0;
}
