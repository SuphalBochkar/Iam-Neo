// #include <bits/stdc++.h>
// using namespace std;

// const int MAX_BOOKS = 20;
// class InvalidBookIDException : public exception
// {
// public:
//     const char *what() const noexcept override
//     {
//         return "Exception caught. Error: Invalid book ID.";
//     }
// };

// class BookNotAvailableException : public exception
// {
// public:
//     const char *what() const noexcept override
//     {
//         return "Exception caught. Error: Book not available.";
//     }
// };

// class Library
// {
// private:
//     vector<string> books;
//     int numBooks;

// public:
//     Library() : numBooks(0) {}

//     void addBook(const string &bookID)
//     {
//         if (numBooks >= MAX_BOOKS)
//         {
//             throw InvalidBookIDException();
//         }
//         books.push_back(bookID);
//         cout << "Book with ID " << bookID << " added to the library." << endl;
//         numBooks++;
//     }

//     void borrowBook(const string &bookID)
//     {
//         auto it = find(books.begin(), books.end(), bookID);
//         if (it != books.end())
//         {
//             books.erase(it);
//             cout << "Book with ID " << bookID << " borrowed successfully." << endl;
//             numBooks--;
//         }
//         else
//         {
//             throw BookNotAvailableException();
//         }
//     }

//     void returnBook(const string &bookID)
//     {
//         books.push_back(bookID);
//         cout << "Book with ID " << bookID << " returned to the library." << endl;
//         numBooks++;
//     }
// };

// int main()
// {
//     Library library;
//     int numBooks;
//     cin >> numBooks;
//     int a = numBooks;
//     if (numBooks > MAX_BOOKS)
//     {
//         numBooks = MAX_BOOKS;
//     }
//     for (int i = 0; i < numBooks; i++)
//     {
//         string bookID;
//         cin >> bookID;
//         library.addBook(bookID);
//     }

//     string borrowID, returnID;
//     cin >> borrowID >> returnID;

//     try
//     {
//         library.borrowBook(borrowID);
//         library.returnBook(returnID);
//         if (a > MAX_BOOKS)
//             throw("hi");
//     }
//     catch (const char *a)
//     {
//         if (a == "hi")
//             cout << "Exception caught. Error: Maximum number of books reached." << endl;
//     }
//     catch (const InvalidBookIDException &e)
//     {
//         cerr << e.what() << endl;
//     }
//     catch (const BookNotAvailableException &e)
//     {
//         cerr << e.what() << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int MAX_BOOKS = 20;

class InvalidBookIDException : public exception
{
public:
    const char *what() const noexcept
    {
        return "Invalid book ID.";
    }
};

class BookNotAvailableException : public exception
{
public:
    const char *what() const noexcept
    {
        return "Book not available.";
    }
};

class Library
{
private:
    vector<string> books;

public:
    void addBook(const string &bookID)
    {
        if (books.size() >= MAX_BOOKS)
        {
            throw overflow_error("Maximum number of books reached.");
        }
        books.push_back(bookID);
        cout << "Book with ID " << bookID << " added to the library." << endl;
    }

    void borrowBook(const string &bookID)
    {
        bool found = false;
        for (auto it = books.begin(); it != books.end(); ++it)
        {
            if (*it == bookID)
            {
                books.erase(it);
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "Book with ID " << bookID << " borrowed successfully." << endl;
        }
        else
        {
            throw InvalidBookIDException();
        }
    }

    void returnBook(const string &bookID)
    {
        books.push_back(bookID);
        cout << "Book with ID " << bookID << " returned to the library." << endl;
    }
};

int main()
{
    int numBooks;
    cin >> numBooks;

    Library library;

    for (int i = 0; i < numBooks; ++i)
    {
        string bookID;
        cin >> bookID;
        library.addBook(bookID);
    }

    string borrowID, returnID;
    cin >> borrowID >> returnID;

    try
    {
        library.borrowBook(borrowID);
        library.returnBook(returnID);
        if (numBooks > MAX_BOOKS)
            throw("hi");
    }
    catch (const char *a)
    {
        if (a == "hi")
        {
            cout << "Exception caught. Error: Maximum number of books reached." << endl;
        }
    }
    catch (const InvalidBookIDException &e)
    {
        cout << "Exception caught. Error: " << e.what() << endl;
    }
    catch (const BookNotAvailableException &e)
    {
        cout << "Exception caught. Error: " << e.what() << endl;
    }
    catch (const overflow_error &e)
    {
        cout << "Exception caught. Error: " << e.what() << endl;
    }

    return 0;
}
