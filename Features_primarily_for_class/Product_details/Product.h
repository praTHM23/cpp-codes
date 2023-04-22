#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product
{
private:
    string productName;
    string productType;
    string productCategory;
    string productColor;
    int cost;

public:
    // Constructors
    Product();
    Product(string name, string type, string category, string color, int cost);

    // Getters and Setters
    string getProductName();
    void setProductName(string name);
    string getProductType();
    void setProductType(string type);
    string getProductCategory();
    void setProductCategory(string category);
    string getProductColor();
    void setProductColor(string color);
    int getCost();
    void setCost(int cost);

    // Member function to search product type
    void searchProductType(Product p[], string search, int n);
};

#endif
