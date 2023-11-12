#include <bits/stdc++.h>
using namespace std;

class Product
{
private:
    string name;
    float price;
    Product **relatedProducts;
    int numRelatedProducts;
    int maxRelatedProducts;

public:
    Product(string productName, float productPrice) : name(productName), price(productPrice), numRelatedProducts(0), maxRelatedProducts(10)
    {
        relatedProducts = new Product *[maxRelatedProducts];
        for (int i = 0; i < maxRelatedProducts; ++i)
        {
            relatedProducts[i] = nullptr;
        }
    }

    ~Product()
    {
        delete[] relatedProducts;
    }

    void addRelatedProduct(Product *relatedProduct)
    {
        if (numRelatedProducts >= maxRelatedProducts)
        {
            return;
        }

        relatedProducts[numRelatedProducts++] = relatedProduct;
    }

    void removeRelatedProduct(Product *relatedProduct)
    {
        int index = -1;
        for (int i = 0; i < numRelatedProducts; ++i)
        {
            if (relatedProducts[i] == relatedProduct)
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            return;
        }
        for (int i = index; i < numRelatedProducts - 1; ++i)
        {
            relatedProducts[i] = relatedProducts[i + 1];
        }

        relatedProducts[numRelatedProducts - 1] = nullptr;
        --numRelatedProducts;
    }

    void findFrequentlyBoughtTogether()
    {
        cout << "Products frequently bought together with " << name << ":\n";
        for (int i = 0; i < numRelatedProducts; ++i)
        {
            cout << "- " << relatedProducts[i]->name << "\n";
        }
    }

    void displayProductDetails()
    {
        cout << "Product Name: " << name << "\n";
        cout << "Price: $" << price << "\n";
    }
};

int main()
{
    int numProducts;
    cin >> numProducts;
    cin.ignore();
    Product **products = new Product *[numProducts];

    for (int i = 0; i < numProducts; ++i)
    {
        string name;
        float price;
        getline(cin, name);
        cin >> price;

        cin.ignore();

        products[i] = new Product(name, price);

        char choice;
        do
        {
            cin >> choice;
            cin.ignore();

            if (choice == 'y' || choice == 'Y')
            {
                string relatedName;
                float relatedPrice;
                getline(cin, relatedName);
                cin >> relatedPrice;
                cin.ignore();
                Product *relatedProduct = new Product(relatedName, relatedPrice);
                products[i]->addRelatedProduct(relatedProduct);
            }
        } while (choice == 'y' || choice == 'Y');
    }

    for (int i = 0; i < numProducts; ++i)
    {
        products[i]->findFrequentlyBoughtTogether();
        cout << "\n";
    }

    for (int i = 0; i < numProducts; ++i)
    {
        delete products[i];
    }
    delete[] products;
    return 0;
}