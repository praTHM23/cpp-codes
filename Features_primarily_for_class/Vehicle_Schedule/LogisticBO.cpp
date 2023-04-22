#include "LogisticBO.h"
#include "Schedule.h"
#include "Booking.h"
#include <iostream>
#include <typeinfo>

using namespace std;

// Generate array of schedule details
Schedule *LogisticsBO::generateScheduleDetails()
{
    Schedule *scheduleArr = new Schedule[2];
    scheduleArr[0] = Schedule(1, "Chennai", "Coimbatore", 506.1, "12-06-2020", "12-06-2020", "VCH01");
    scheduleArr[1] = Schedule(2, "Coimbatore", "Chennai", 506.2, "12-12-2020", "12-12-2020", "VCH02");
    return scheduleArr;
}

// Generate array of booking details
Booking *LogisticsBO::generateBookingDetails()
{
    Booking *bookingArr = new Booking[2];
    bookingArr[0] = Booking(1, "10x10x10", 5.5, "booked", "user1");
    bookingArr[1] = Booking(2, "20x20x20", 10.0, "cancelled", "user2");
    return bookingArr;
}

template <class T>
void LogisticsBO::displayDetails(T *obj)
{
    // Get class name of object
    string className = typeid(*obj).name();

    // Check class name and display corresponding information
    if (className == typeid(Schedule).name())
    {
        Schedule *schedule = dynamic_cast<Schedule *>(obj);
        if (schedule != nullptr)
        {
            cout << "Schedule Details:" << endl;
            cout << "Id: " << schedule->getId() << endl;
            cout << "Origin: " << schedule->getOrigin() << endl;
            cout << "Destination: " << schedule->getDestination() << endl;
            cout << "Distance: " << fixed << setprecision(2) << schedule->getDistance() << endl;
            cout << "Start Date: " << schedule->getStartDate() << endl;
            cout << "Expected End Date: " << schedule->getExpectedEndDate() << endl;
            cout << "Vehicle Id: " << schedule->getVehicleId() << endl;
        }
    }
    else if (className == typeid(Booking).name())
    {
        Booking *booking = dynamic_cast<Booking *>(obj);
        if (booking != nullptr)
        {
            cout << "Booking Details:" << endl;
            cout << "Booking Id: " << booking->getBookingId() << endl;
            cout << "Container Dimension: " << booking->getContainerDimension() << endl;
            cout << "Tonnage: " << fixed << setprecision(2) << booking->getTonnage() << endl;
            cout << "Status: " << booking->getStatus() << endl;
            cout << "Username: " << booking->getUsername() << endl;
        }
    }
    else
    {
        cout << "Invalid object type." << endl;
    }
}

template <>
void LogisticsBO::displayDetails<Schedule>(Schedule *obj);

// Declaration of explicit template specialization for Booking*
template <>
void LogisticsBO::displayDetails<Booking>(Booking *obj);

// template <class T>
// void LogisticsBO::displayDetails(T obj)
// {
//     // Get class name of object
//     string className = typeid(obj).name();

//     // Check class name and display corresponding information
//     if (className == typeid(Schedule).name())
//     {
//         cout << "Schedule Details:" << endl;
//         cout << "Id: " << obj.getId() << endl;
//         cout << "Origin: " << obj.getOrigin() << endl;
//         cout << "Destination: " << obj.getDestination() << endl;
//         cout << "Distance: " << fixed << setprecision(2) << obj.getDistance() << endl;
//         cout << "Start Date: " << obj.getStartDate() << endl;
//         cout << "Expected End Date: " << obj.getExpectedEndDate() << endl;
//         cout << "Vehicle Id: " << obj.getVehicleId() << endl;
//     }
//     else if (className == typeid(Booking).name())
//     {
//         cout << "Booking Details:" << endl;
//         cout << "Booking Id: " << obj.getBookingId() << endl;
//         cout << "Container Dimension: " << obj.getContainerDimension() << endl;
//         cout << "Tonnage: " << fixed << setprecision(2) << obj.getTonnage() << endl;
//         cout << "Status: " << obj.getStatus() << endl;
//         cout << "Username: " << obj.getUsername() << endl;
//     }
//     else
//     {
//         cout << "Invalid object type." << endl;
//     }
// }

// Display details of generic object
// template <class T>
// void LogisticsBO::displayDetails(T obj)
// {
//     // Get class name of object
//     string className = typeid(obj).name();

//     // Check class name and display corresponding information
//     if (className == typeid(Schedule).name())
//     {
//         // Schedule *scheduleObj = static_cast<Schedule *>(&obj);
//         cout << "Schedule Details:" << endl;
//         cout << "Id: " << scheduleObj->getId() << endl;
//         cout << "Origin: " << scheduleObj->getOrigin() << endl;
//         cout << "Destination: " << scheduleObj->getDestination() << endl;
//         cout << "Distance: " << scheduleObj->getDistance() << endl;
//         cout << "Start Date: " << scheduleObj->getStartDate() << endl;
//         cout << "Expected End Date: " << scheduleObj->getExpectedEndDate() << endl;
//         cout << "Vehicle Id: " << scheduleObj->getVehicleId() << endl;
//     }
//     else if (className == typeid(Booking).name())
//     {
//         // Booking *bookingObj = static_cast<Booking *>(&obj);
//         cout << "Booking Details:" << endl;
//         cout << "Booking Id: " << bookingObj->getBookingId() << endl;
//         cout << "Container Dimension: " << bookingObj->getContainerDimension() << endl;
//         cout << "Tonnage: " << bookingObj->getTonnage() << endl;
//         cout << "Status: " << bookingObj->getStatus() << endl;
//         cout << "Username: " << bookingObj->getUsername() << endl;
//     }
//     else
//     {
//         cout << "Invalid object type." << endl;
//     }
// }
// template void LogisticsBO::displayDetails<Schedule>(Schedule);
// template void LogisticsBO::displayDetails<Booking>(Booking);