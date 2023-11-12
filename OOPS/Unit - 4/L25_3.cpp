// Number to roman number

#include <bits/stdc++.h>
using namespace std;

class Roman
{
private:
    string roman;
    map<char, int> romanValues;

public:
    Roman(const string &input) : roman(input)
    {
        romanValues['I'] = 1;
        romanValues['V'] = 5;
        romanValues['X'] = 10;
        romanValues['L'] = 50;
        romanValues['C'] = 100;
        romanValues['D'] = 500;
        romanValues['M'] = 1000;
    }

    int toDecimal()
    {
        int result = 0;
        int prev = 0;

        for (int i = roman.length() - 1; i >= 0; i--)
        {
            int current = romanValues[roman[i]];

            if (current >= prev)
            {
                result += current;
            }
            else
            {
                result -= current;
            }

            prev = current;
        }

        return result;
    }
};

int main()
{
    string str;
    cin >> str;

    Roman roman(str);
    int decimalNumeral = roman.toDecimal();

    cout << "Equivalent decimal number: " << decimalNumeral << endl;

    return 0;
}
