#ifndef GUEST_H
#define GUEST_H

#include <string>
using namespace std;
class Guest
{
private:
    int id;
    std::string firstName, lastName, dob, contactNo, email, username, password, role, address;
    int age;

public:
    Guest();
    void setId(int id);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setDob(string dob);
    void setAge(int age);
    void setContactNo(string contactNo);
    void setEmail(string email);
    void setUsername(string username);
    void setPassword(string password);
    void setRole(string role);
    void setAddress(string address);
    string getEmail();
    void displayDetails();
};

#endif
