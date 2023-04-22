#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
public:
    int id;
    string first_name;
    string last_name;
    string dob;
    int age;
    string contact_no;
    string email;
    string role;
    
    User(int id, string first_name, string last_name, string dob, int age, string contact_no, string email, string role);
};

#endif // USER_H
