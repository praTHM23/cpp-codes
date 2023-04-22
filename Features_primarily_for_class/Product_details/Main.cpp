#include <iostream>
#include <cstdio>
#include "Product.h"
using namespace std;

int main()
{
    // Get input from user
    int n;
    cout << "Enter number of Products:" << endl;
    cin >> n;

    Product p[n];

    for (int i = 0; i < n; i++)
    {
        string name, type, category, color;
        int cost;

        cout << "Enter productName:" << endl;
        cin >> name;

        cout << "Enter productType:" << endl;
        cin >> type;

        cout << "Enter productCategory:" << endl;
        cin >> category;

        cout << "Enter productColor: " << endl;
        cin >> color;

        cout << "Enter cost:" << endl;
        cin >> cost;

        p[i] = Product(name, type, category, color, cost);
    }

    // Search product type
    string search;
    cout << "ProductType to be searched: ";
    cin >> search;

    printf("\n");

    p[0].searchProductType(p, search, n);

    return 0;
}