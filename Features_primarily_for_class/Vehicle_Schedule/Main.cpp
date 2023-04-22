#include <iostream>
#include "Schedule.h"
#include "Booking.h"
#include "LogisticBO.h"

using namespace std;

int main()
{
    LogisticsBO lb;
    char choice;

    cout << "What is the preferred choice ?" << endl;
    cout << "1-Schedule" << endl;
    cout << "2-Booking" << endl;
    cin >> choice;

    if (choice == '1')
    {
        cout << "Schedule details :" << endl;
        Schedule *sArr = lb.generateScheduleDetails();
        lb.displayDetails(sArr);
    }
    else if (choice == '2')
    {
        cout << "Booking details :" << endl;
        Booking *bArr = lb.generateBookingDetails();
        lb.displayDetails(bArr);
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
