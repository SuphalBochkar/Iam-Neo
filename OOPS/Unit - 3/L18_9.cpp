#include <bits/stdc++.h>
using namespace std;

int setup()
{
    string inputText;
    ofstream myfile1("sample1.txt");
    if (myfile1.is_open())
    {
        cin >> inputText;
        myfile1 << inputText << endl;
        myfile1.close();
    }
    else
    {
        cout << "Unable to open file";
        return 1;
    }

    string revInputText = inputText;
    reverse(revInputText.begin(), revInputText.end());
    ofstream myfile2("sample2.txt");
    if (myfile2.is_open())
    {
        myfile2 << revInputText << endl;
        myfile2.close();
    }
    else
    {
        cout << "Unable to open file";
        return 1;
    }
    return 0;
}

int main()
{
    int setupResult = setup();

    if (setupResult != 0)
    {
        return setupResult;
    }

    ifstream file1("sample1.txt");
    ifstream file2("sample2.txt");

    string content1, content2;

    while (file1 && file2)
    {
        getline(file1, content1);
        getline(file2, content2);

        if (content1 != content2)
        {
            cout << "Comparing files..." << endl;
            cout << "Files differ." << endl;
            return 0;
        }
    }

    if (!file1 && !file2)
    {
        cout << "Comparing files..." << endl;
        cout << "Files are the same." << endl;
    }
    else
    {
        cout << "Comparing files..." << endl;
        cout << "Files differ." << endl;
    }

    file1.close();
    file2.close();

    return 0;
}
