#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package {
private:
    string packageId;
    string packageName;
    string city;
    double cost;
    string createdDate;

public:
    // Constructors
    Package();
    Package(string id, string name, string city, double cost, string createdDate);

    // Getters and Setters
    string getPackageId();
    void setPackageId(string id);
    string getPackageName();
    void setPackageName(string name);
    string getCity();
    void setCity(string city);
    double getCost();
    void setCost(double cost);
    string getCreatedDate();
    void setCreatedDate(string createdDate);
};

#endif
