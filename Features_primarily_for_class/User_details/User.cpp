#include "User.h"

User::User(int id, string first_name, string last_name, string dob, int age, string contact_no, string email, string role) {
    this->id = id;
    this->first_name = first_name;
    this->last_name = last_name;
    this->dob = dob;
    this->age = age;
    this->contact_no = contact_no;
    this->email = email;
    this->role = role;
}
