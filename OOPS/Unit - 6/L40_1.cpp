#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Book
{
protected:
    string title;
    string author;
    bool available;

public:
    Book() {}
    Book(const string &title, const string &author, bool available)
        : title(title), author(author), available(available) {}

    virtual void displayDetails() const = 0;

    void checkout()
    {
        if (available)
        {
            cout << "Book \"" << title << "\" is available for checkout." << endl;
            available = false;
        }
        else
        {
            cout << "Book \"" << title << "\" is not available for checkout." << endl;
        }
    }
};

template <typename T>
class FictionBook : public Book<T>
{
private:
    string genre;

public:
    FictionBook(const string &title, const string &author, bool available, const string &genre)
        : Book<T>(title, author, available), genre(genre) {}

    void displayDetails() const override
    {
        cout << "Fiction Book Details:" << endl;
        cout << this->title << " " << this->author << "  " << (this->available ? "Available " : "Not Available ") << genre << endl;
    }
};

template <typename T>
class NonFictionBook : public Book<T>
{
private:
    string subject;

public:
    NonFictionBook(const string &title, const string &author, bool available, const string &subject)
        : Book<T>(title, author, available), subject(subject) {}

    void displayDetails() const override
    {
        cout << "Non-Fiction Book Details:" << endl;
        cout << this->title << " " << this->author << "  " << (this->available ? "Available " : "Not Available ") << subject << endl;
    }
};

int main()
{
    string title, author, genre, subject;
    bool available;
    int bookType;

    getline(cin, title);
    getline(cin, author);
    cin >> available;
    cin.ignore();
    getline(cin, genre);
    FictionBook<int> fictionBook(title, author, available, genre);

    getline(cin, title);
    getline(cin, author);
    cin >> available;
    cin.ignore();
    getline(cin, subject);
    NonFictionBook<int> nonFictionBook(title, author, available, subject);

    fictionBook.displayDetails();
    nonFictionBook.displayDetails();

    cout << "Checking out books details:" << endl;
    fictionBook.checkout();
    nonFictionBook.checkout();

    return 0;
}