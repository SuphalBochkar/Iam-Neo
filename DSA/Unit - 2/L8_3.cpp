#include <bits/stdc++.h>
using namespace std;

struct node
{
    string data;
    struct node *next;
};

void addNode(node *&list, string key);
void insertNode(node *&list, string key, int pos);
void print(node *list);

