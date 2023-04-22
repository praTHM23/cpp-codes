#ifndef USER_H
#define USER_H

#include <string>
using namespace std;
class User {
private:
    int id;
    string name, organization, username, password, contactNumber, address, status, role;
    double contractRate;

public:
    User();
    void setId(int id);
    void setName(string name);
    void setOrganization(string organization);
    void setUsername(string username);
    void setPassword(string password);
    void setContactNumber(string contactNumber);
    void setAddress(string address);
    void setStatus(string status);
    void setContractRate(double contractRate);
    void setRole(string role);
    int getId();
    string getUsername();
    string getContactNumber();
    bool equals(User u1, User u2);
    void display(User user);
};

#endif
