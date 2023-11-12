// #include <bits/stdc++.h>
// using namespace std;

// bool validateEmail(const string &email)
// {
//     regex pattern("[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}");

//     return regex_match(email, pattern);
// }

// int main()
// {
//     string email;
//     cin >> email;

//     try
//     {
//         if (validateEmail(email))
//         {
//             cout << "Email Id is Valid." << endl;
//         }
//         else
//         {
//             throw exception();
//         }
//     }
//     catch (const exception &e)
//     {
//         cout << "Exception Caught..." << endl;
//         cout << "Invalid Email Id!!!" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool valid(const string email)
{
    regex pattern("[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}");
    return regex_match(email, pattern);
}

int main()
{
    string s;
    cin >> s;

    try
    {
        if (valid(s))
        {
            cout << "Email Id is Valid." << endl;
        }
        else
        {
            throw "hi";
        }
    }
    catch (const char *e)
    {
        if (e == "hi")
        {
            cout << "Exception Caught..." << endl;
            cout << "Invalid Email Id!!!" << endl;
        }
    }
}