#include <bits/stdc++.h>
using namespace std;

class Book
{
public:
    string title, author;
    int year;

    void input()
    {
        cin.ignore();
        getline(cin, title);
        getline(cin, author);
        cin >> year;
    }

    void print(int i)
    {
        cout << "Book " << i + 1 << ":" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << year << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    Book books[n];

    for (int i = 0; i < n; i++)
    {
        books[i].input();
    }

    cout << "Book Information:" << endl;

    for (int i = 0; i < n; i++)
    {
        books[i].print(i + 1);
    }
}