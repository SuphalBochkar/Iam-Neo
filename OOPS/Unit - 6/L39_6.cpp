#include <iostream>
#include <string>
using namespace std;

template <typename T>
T toUppercase(T str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

template <typename T>
T toLowercase(T str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

template <typename T>
T toFirstLetterUppercase(T str)
{
    bool newWord = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (newWord && islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            newWord = true;
        }
        else
        {
            newWord = false;
        }
    }
    return str;
}

int main()
{
    string input;
    char choice;

    getline(cin, input);

    cin >> choice;

    switch (choice)
    {
    case 'U':
        cout << "Uppercase string: " << toUppercase(input) << endl;
        break;
    case 'L':
        cout << "Lowercase string: " << toLowercase(input) << endl;
        break;
    case 'F':
        cout << "String with first letter of each word capitalized: " << toFirstLetterUppercase(input) << endl;
        break;
    default:
        cout << "Invalid choice. Please enter U, L, or F." << endl;
        break;
    }
    string a = "template <typename T> convertString convertFirstLetterToUpper ";
    return 0;
}
