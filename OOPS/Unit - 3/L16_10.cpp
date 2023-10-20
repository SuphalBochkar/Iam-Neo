// #include <iostream>
// using namespace std;

// class cashRegister
// {
// private:
//     int cash;

// public:
//     cashRegister() : cash(500) {}

//     cashRegister(int cashIn) : cash(cashIn) {}

//     int getCurrentBalance()
//     {
//         return cash;
//     }

//     void acceptAmount(int amountIn)
//     {
//         cash += amountIn;
//     }
// };

// class dispenserType
// {
// private:
//     int noOfItems;
//     int cost;

// public:
//     dispenserType() : noOfItems(50), cost(50) {}

//     dispenserType(int setNoOfItems, int setCost) : noOfItems(setNoOfItems), cost(setCost) {}

//     int getNoOfItems()
//     {
//         return noOfItems;
//     }

//     int getCost()
//     {
//         return cost;
//     }

//     void makeSale()
//     {
//         if (noOfItems > 0)
//             noOfItems--;
//     }
// };

// void sellProduct(int choice, cashRegister &registerObj, dispenserType &product)
// {
//     switch (choice)
//     {
//     case 1:
//         cout << "Please deposit " << product.getCost() << " cents" << endl;
//         break;
//     case 2:
//         cout << "Please deposit " << product.getCost() << " cents" << endl;
//         break;
//     case 3:
//         cout << "Please deposit " << product.getCost() << " cents" << endl;
//         break;
//     case 4:
//         cout << "Please deposit " << product.getCost() << " cents" << endl;
//         break;
//     default:
//         return;
//     }

//     int totalDeposited = 0;
//     int amountDeposited;

//     int a, b;

//     cin >> a;
//     totalDeposited += a;
//     if (totalDeposited == product.getCost())
//     {
//         cout << "Collect your item at the bottom and enjoy." << endl;
//         registerObj.acceptAmount(-product.getCost());
//         product.makeSale();
//         return;
//     }
//     else
//     {
//         cout << "Please deposit another " << product.getCost() - totalDeposited << " cents" << endl;
//         cin >> b;
//         totalDeposited += b;
//         if (totalDeposited == product.getCost())
//         {
//             cout << "Collect your item at the bottom and enjoy." << endl;
//             registerObj.acceptAmount(-product.getCost());
//             product.makeSale();
//             return;
//         }
//         else
//         {
//             cout << "The amount is not enough. Collect what you deposited." << endl;
//             return;
//         }
//     }
// }

// int main()
// {
//     cashRegister registerObj;
//     dispenserType candy(50, 40);
//     dispenserType chips(50, 85);
//     dispenserType gum(50, 20);
//     dispenserType cookies(50, 85);

//     int choice;

//     do
//     {
//         cin >> choice;

//         sellProduct(choice, registerObj, (choice == 1) ? candy : (choice == 2) ? chips
//                                                              : (choice == 3)   ? gum
//                                                                                : cookies);

//     } while (choice != 5);

//     return 0;
// }





#include <iostream>
using namespace std;

class CashRegister
{
private:
    int cash;

public:
    CashRegister() : cash(500) {}

    int getCurrentBalance()
    {
        return cash;
    }

    void acceptAmount(int amountIn)
    {
        cash += amountIn;
    }
};

class DispenserType
{
private:
    int noOfItems;
    int cost;

public:
    DispenserType(int setNoOfItems, int setCost) : noOfItems(setNoOfItems), cost(setCost) {}

    int getNoOfItems()
    {
        return noOfItems;
    }

    int getCost()
    {
        return cost;
    }

    void makeSale()
    {
        if (noOfItems > 0)
            noOfItems--;
    }
};

void sellProduct(DispenserType &product, CashRegister &registerObj)
{
    cout << "Please deposit " << product.getCost() << " cents" << endl;
    int totalDeposited = 0;

    while (totalDeposited < product.getCost())
    {
        int deposit;
        cin >> deposit;
        totalDeposited += deposit;

        if (totalDeposited >= product.getCost())
        {
            cout << "Collect your item at the bottom and enjoy." << endl;
            registerObj.acceptAmount(product.getCost());
            product.makeSale();
        }
        else if (totalDeposited < product.getCost())
        {
            cout << "Please deposit another " << product.getCost() - totalDeposited << " cents" << endl;
        }
    }

    if (totalDeposited < product.getCost())
    {
        cout << "The amount is not enough. Collect what you deposited." << endl;
    }
}

int main()
{
    CashRegister registerObj;
    DispenserType candy(50, 40);
    DispenserType chips(50, 85);
    DispenserType gum(50, 20);
    DispenserType cookies(50, 85);

    int choice;

    do
    {
        cin >> choice;

        switch (choice)
        {
        case 1:
            sellProduct(candy, registerObj);
            break;
        case 2:
            sellProduct(chips, registerObj);
            break;
        case 3:
            sellProduct(gum, registerObj);
            break;
        case 4:
            sellProduct(cookies, registerObj);
            break;
        default:
            break;
        }
    } while (choice != 5);

    return 0;
}
