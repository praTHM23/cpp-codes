#include "security.h"
#include "guest.h"
#include <iostream>
using namespace std;
bool Security::validateEmail(Guest g)
{
    string email = g.getEmail();
    int atPos = email.find('@');
    int dotPos = email.rfind('.');
    if (atPos == string::npos || dotPos == string::npos || dotPos < atPos)
    {
        cout << "Your Email-Id is invalid " << endl;
        return false;
    }
    else
    {
        cout << "Your Email-Id is valid" << endl;
        return true;
    }
}