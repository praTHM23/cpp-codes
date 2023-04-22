#include <iostream>
#include "guest.h"
#include "security.h"
#include <string>
using namespace std;
int main()
{
    int id, age;
    string firstName, lastName, dob, contactNo, email, username, password, role, address;
    cout << "Enter ID:" << endl;
    cin >> id;

    cout << "Enter Firstname:" << endl;
    cin >> firstName;

    cout << "Enter Lastname:" << endl;
    cin >> lastName;

    cout << "Enter DOB:" << endl;
    cin >> dob;

    cout << "Enter age:" << endl;
    cin >> age;

    cout << "Enter Contact Number:" << endl;
    cin >> contactNo;

    cout << "Enter E-Mail:" << endl;
    cin >> email;

    Guest guest;
    guest.setId(id);
    guest.setFirstName(firstName);
    guest.setLastName(lastName);
    guest.setDob(dob);
    guest.setAge(age);
    guest.setContactNo(contactNo);
    guest.setEmail(email);

    Security security;
    if (security.validateEmail(guest))
    {
        cout << "Enter Username:" << endl;
        cin >> username;

        cout << "Enter Password:" << endl;
        cin >> password;

        cout << "Enter Role:" << endl;
        cin >> role;

        cout << "Enter Address:" << endl;
        cin >> address;

        guest.setUsername(username);
        guest.setPassword(password);
        guest.setRole(role);
        guest.setAddress(address);

        guest.displayDetails();
    }

    return 0;
}