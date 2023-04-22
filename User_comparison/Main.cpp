#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

#include "User.h"
using namespace std;
int main()
{
    User users[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the details of user " << i + 1 << endl;
        cout << "Enter id : " << endl;
        int id;
        cin >> id;
        users[i].setId(id);
        cout << "Enter name : " << endl;
        string name;
        getline(cin >> ws, name);
        users[i].setName(name);
        cout << "Enter organization : " << endl;
        string organization;
        getline(cin >> ws, organization);
        users[i].setOrganization(organization);
        cout << "Enter username : " << endl;
        string username;
        getline(cin >> ws, username);
        users[i].setUsername(username);
        cout << "Enter password : " << endl;
        string password;
        getline(cin >> ws, password);
        users[i].setPassword(password);
        cout << "Enter contact number : " << endl;
        string contactNumber;
        getline(cin >> ws, contactNumber);
        users[i].setContactNumber(contactNumber);
        cout << "Enter address : " << endl;
        string address;
        getline(cin >> ws, address);
        users[i].setAddress(address);
        cout << "Enter status : " << endl;
        string status;
        getline(cin >> ws, status);
        users[i].setStatus(status);
        cout << "Enter contract rate : " << endl;
        double contractRate;
        cin >> contractRate;
        users[i].setContractRate(contractRate);
        cout << "Enter role : " << endl;
        string role;
        getline(cin >> ws, role);
        users[i].setRole(role);
        cout << endl;
    }

    if (users[0].equals(users[0], users[1]))
    {
        cout << "Both the users are same." << endl;
        cout << "User Detail : " << endl;
        users[1].display(users[1]);
    }
    else
    {
        cout << "Both the users are different." << endl;
        cout << "User Detail 1 : " << endl;
        users[0].display(users[0]);
        cout << "User Detail 2 : " << endl;
        users[1].display(users[1]);
    }

    return 0;
}
