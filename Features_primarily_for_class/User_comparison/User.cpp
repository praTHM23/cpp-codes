#include "User.h"
#include <iostream>
#include <iomanip>

using namespace std;
User::User() {}

void User::setId(int id)
{
    this->id = id;
}

void User::setName(string name)
{
    this->name = name;
}

void User::setOrganization(string organization)
{
    this->organization = organization;
}

void User::setUsername(string username)
{
    this->username = username;
}

void User::setPassword(string password)
{
    this->password = password;
}

void User::setContactNumber(string contactNumber)
{
    this->contactNumber = contactNumber;
}

void User::setAddress(string address)
{
    this->address = address;
}

void User::setStatus(string status)
{
    this->status = status;
}

void User::setContractRate(double contractRate)
{
    this->contractRate = contractRate;
}

void User::setRole(string role)
{
    this->role = role;
}

int User::getId()
{
    return id;
}

string User::getUsername()
{
    return username;
}

string User::getContactNumber()
{
    return contactNumber;
}

bool User::equals(User u1, User u2)
{
    if (u1.getId() == u2.getId() && u1.getUsername() == u2.getUsername() && u1.getContactNumber() == u2.getContactNumber())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void User::display(User user)
{
    cout << "User Id : " << user.getId() << endl;
    cout << "User Name : " << user.name << endl;
    cout << "Organization : " << user.organization << endl;
    cout << "Username : " << user.username << endl;
    cout << "Password : " << user.password << endl;
    cout << "Contact Number : " << user.contactNumber << endl;
    cout << "Address : " << user.address << endl;
    cout << "Status : " << user.status << endl;
    cout << "Contract Rate : " << fixed << setprecision(1) << user.contractRate << endl;
    cout << "Role : " << user.role << endl;
}
