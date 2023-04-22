#include "Product.h"
#include <iostream>
#include <cstdio>
using namespace std;

// Constructors
Product::Product()
{
    productName = "";
    productType = "";
    productCategory = "";
    productColor = "";
    cost = 0;
}

Product::Product(string name, string type, string category, string color, int cost)
{
    productName = name;
    productType = type;
    productCategory = category;
    productColor = color;
    this->cost = cost;
}

// Getters and Setters
string Product::getProductName()
{
    return productName;
}

void Product::setProductName(string name)
{
    productName = name;
}

string Product::getProductType()
{
    return productType;
}

void Product::setProductType(string type)
{
    productType = type;
}

string Product::getProductCategory()
{
    return productCategory;
}

void Product::setProductCategory(string category)
{
    productCategory = category;
}

string Product::getProductColor()
{
    return productColor;
}

void Product::setProductColor(string color)
{
    productColor = color;
}

int Product::getCost()
{
    return cost;
}

void Product::setCost(int cost)
{
    this->cost = cost;
}

// Member function to search product type
void Product::searchProductType(Product p[], string search, int n)
{
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (p[i].getProductType() == search)
        {
            printf("Name = %s\nCategory = %s\nColor = %s\nCost = %d\n",
                   p[i].getProductName().c_str(),
                   p[i].getProductCategory().c_str(),
                   p[i].getProductColor().c_str(),
                   p[i].getCost());
            found = true;
        }
    }

    if (!found)
    {
        cout << "Searching Product Type not found" << endl;
    }
}
