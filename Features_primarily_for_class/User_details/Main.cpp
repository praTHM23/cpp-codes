#include <iostream>
#include "User.h"
using namespace std;

int main() {
    int id, age;
    string first_name, last_name, dob, contact_no, email, role;
    
    cout << "Enter ID:" << endl;
    cin >> id;
    cin.ignore(); // to ignore the newline character
    cout << "Enter Firstname:" << endl;
    getline(cin, first_name);
    cout << "Enter Lastname:" << endl;
    getline(cin, last_name);
    cout << "Enter DOB:" << endl;
    getline(cin, dob);
    cout << "Enter age:" << endl;
    cin >> age;
    cin.ignore(); // to ignore the newline character
    cout << "Enter Contact Number:" << endl;
    getline(cin, contact_no);
    cout << "Enter E-Mail:" << endl;
    getline(cin, email);
    cout << "Enter Role:" << endl;
    getline(cin, role);
    
    User user(id, first_name, last_name, dob, age, contact_no, email, role);
    
    cout << "User Details:" << endl;
    cout << "ID: " << user.id << endl;
    cout << "Firstname: " << user.first_name << endl;
    cout << "Lastname: " << user.last_name << endl;
    cout << "DOB: " << user.dob << endl;
    cout << "Contact Number: " << user.contact_no << endl;
    cout << "E-Mail: " << user.email << endl;
    cout << "Role: " << user.role << endl;
    
    return 0;
}
