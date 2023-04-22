#include "guest.h"
#include <iostream>
using namespace std;
Guest::Guest() {}

void Guest::setId(int id)
{
    this->id = id;
}

void Guest::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void Guest::setLastName(string lastName)
{
    this->lastName = lastName;
}

void Guest::setDob(string dob)
{
    this->dob = dob;
}

void Guest::setAge(int age)
{
    this->age = age;
}

void Guest::setContactNo(string contactNo)
{
    this->contactNo = contactNo;
}

void Guest::setEmail(string email)
{
    this->email = email;
}

void Guest::setUsername(string username)
{
    this->username = username;
}

void Guest::setPassword(string password)
{
    this->password = password;
}

void Guest::setRole(string role)
{
    this->role = role;
}

void Guest::setAddress(string address)
{
    this->address = address;
}

string Guest::getEmail()
{
    return email;
}

void Guest::displayDetails()
{
    cout << "User Details:" << endl;
    cout << "ID: " << id << endl;
    cout << "Firstname: " << firstName << endl;
    cout << "Lastname: " << lastName << endl;
    cout << "DOB: " << dob << endl;
    cout << "Age: " << age << endl;
    cout << "Contact Number: " << contactNo << endl;
    cout << "E-Mail: " << email << endl;
    cout << "Username: " << username << endl;
    cout << "Password: " << password << endl;
    cout << "Role: " << role << endl;
    cout << "Address: " << address << endl;
}
