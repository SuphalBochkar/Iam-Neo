// #include <bits/stdc++.h>
// using namespace std;

// bool isValidMathExpression(const char *expression)
// {
//     const char *ptr = expression;

//     while (*ptr != '\0')
//     {
//         char c = *ptr;
//         if (!isdigit(c) && strchr("+-*/() \t", c) == nullptr)
//         {
//             return false;
//         }
//         ptr++;
//     }

//     return true;
// }

// int main()
// {

//     int buffersize = 1000;
//     char sen[buffersize];

//     cin.getline(sen, buffersize);

//     if (isValidMathExpression(sen))
//     {
//         cout << "Valid mathematical expression." << endl;
//     }
//     else
//     {

//         cout << "Invalid mathematical expression." << endl;
//     }
//     return 0;
// }

