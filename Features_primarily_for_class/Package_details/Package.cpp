
#include "Package.h"

// Constructors
Package::Package() {
    packageId = "";
    packageName = "";
    city = "";
    cost = 0.0;
    createdDate = "";
}

Package::Package(string id, string name, string city, double cost, string createdDate) {
    packageId = id;
    packageName = name;
    this->city = city;
    this->cost = cost;
    this->createdDate = createdDate;
}

// Getters and Setters
string Package::getPackageId() {
    return packageId;
}

void Package::setPackageId(string id) {
    packageId = id;
}

string Package::getPackageName() {
    return packageName;
}

void Package::setPackageName(string name) {
    packageName = name;
}

string Package::getCity() {
    return city;
}

void Package::setCity(string city) {
    this->city = city;
}

double Package::getCost() {
    return cost;
}

void Package::setCost(double cost) {
    this->cost = cost;
}

string Package::getCreatedDate() {
    return createdDate;
}

void Package::setCreatedDate(string createdDate) {
    this->createdDate = createdDate;
}
