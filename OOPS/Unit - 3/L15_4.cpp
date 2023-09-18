#include <iostream>
#include <iomanip>
#include <cmath>

class FixedDeposit
{
private:
    long int principalAmount;
    int years;
    float rate;
    double returnValue;

public:
    FixedDeposit(long int principalAmount, int years, float rate)
    {
        this->principalAmount = principalAmount;
        this->years = years;
        this->rate = rate;
        calculateReturnValue();
        display();
    }

    void calculateReturnValue()
    {
        if (rate <= 1.0)
        {
            rate *= 100.0;
        }
        rate /= 100.0;

        returnValue = principalAmount * std::pow(1 + rate, years);
    }

    void display()
    {
        std::cout << std::fixed << std::setprecision(2) << returnValue << std::endl;
    }
};

int main()
{
    long int principalAmount;
    int years;
    float rate;

    std::cin >> principalAmount >> years >> rate;
    FixedDeposit fd1(principalAmount, years, rate);

    std::cin >> principalAmount >> years >> rate;
    FixedDeposit fd2(principalAmount, years, rate);

    return 0;
}
