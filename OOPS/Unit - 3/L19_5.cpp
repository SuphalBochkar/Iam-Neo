#include <iostream>
#include <fstream>
using namespace std;

class PrimeNumbers
{
public:
    int a, b;

    bool isPrime(int num)
    {
        if (num <= 1)
            return false;
        if (num <= 3)
            return true;
        if (num % 2 == 0 || num % 3 == 0)
            return false;

        for (int i = 5; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
                return false;
        }

        return true;
    }

    void Range()
    {
        const char *fileName = "prime.txt";

        ofstream outFile(fileName);
        cin >> a >> b;

        if (a > 1000 || b > 1000 || a >= b || a < 2)
        {
            cout << "Invalid input!" << endl;
            return;
        }

        for (int i = a; i <= b; ++i)
        {
            if (isPrime(i))
            {
                outFile << i << " ";
            }
        }

        outFile.close();

        ifstream inFile(fileName);
        if (inFile.is_open())
        {
            int num;
            while (inFile >> num)
            {
                cout << num << " ";
            }
            cout << endl;
            inFile.close();
        }
    }
};

int main()
{
    PrimeNumbers p;
    p.Range();
    return 0;
}
