#include <iostream>
#include "Package.h"
using namespace std;

int main()
{
    // Get input from user
    string id, name, city, date;
    double cost;

    cout << "Enter the Package ID: ";
    cin >> id;

    cout << "Enter the Package Name: ";
    cin >> name;

    cout << "Enter the City: ";
    cin >> city;

    cout << "Enter the Cost: ";
    cin >> cost;

    cout << "Enter the Created Date: ";
    cin >> date;

    // Create Package object and set attributes using setters
    Package pkg;
    pkg.setPackageId(id);
    pkg.setPackageName(name);
    pkg.setCity(city);
    pkg.setCost(cost);
    pkg.setCreatedDate(date);

    // Display package details using getters
    cout << "Package ID: " << pkg.getPackageId() << endl;
    cout << "Package Name: " << pkg.getPackageName() << endl;
    cout << "City: " << pkg.getCity() << endl;
    cout << "Cost: " << pkg.getCost() << endl;
    cout << "Created Date: " << pkg.getCreatedDate() << endl;

    return 0;
}
