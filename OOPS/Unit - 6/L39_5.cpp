#include <iostream>
using namespace std;

// Function template to calculate the total cost
template <typename T>
T calculateTotalCost(const T *prices, int n)
{
    T total = 0;
    for (int i = 0; i < n; i++)
    {
        total += prices[i];
    }
    return total;
}

int main()
{
    int n;
    cin >> n;

    // Declare an array of prices
    double prices[n];

    // Input product prices
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    // Calculate the total cost and display it
    double totalCost = calculateTotalCost(prices, n);
    cout << totalCost << endl;

    return 0;
}
