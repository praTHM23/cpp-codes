#include "Schedule.h"

// Default constructor
Schedule::Schedule() {}

// Parameterized constructor
Schedule::Schedule(int id, string origin, string destination, double distance, string startDate, string expectedEndDate, string vehicleId)
{
    this->id = id;
    this->origin = origin;
    this->destination = destination;
    this->distance = distance;
    this->startDate = startDate;
    this->expectedEndDate = expectedEndDate;
    this->vehicleId = vehicleId;
}

// Getters
int Schedule::getId()
{
    return id;
}

string Schedule::getOrigin()
{
    return origin;
}

string Schedule::getDestination()
{
    return destination;
}

double Schedule::getDistance()
{
    return distance;
}

string Schedule::getStartDate()
{
    return startDate;
}

string Schedule::getExpectedEndDate()
{
    return expectedEndDate;
}

string Schedule::getVehicleId()
{
    return vehicleId;
}

// Setters
void Schedule::setId(int id)
{
    this->id = id;
}

void Schedule::setOrigin(string origin)
{
    this->origin = origin;
}

void Schedule::setDestination(string destination)
{
    this->destination = destination;
}

void Schedule::setDistance(double distance)
{
    this->distance = distance;
}

void Schedule::setStartDate(string startDate)
{
    this->startDate = startDate;
}

void Schedule::setExpectedEndDate(string expectedEndDate)
{
    this->expectedEndDate = expectedEndDate;
}

void Schedule::setVehicleId(string vehicleId)
{
    this->vehicleId = vehicleId;
}

// Display function
// void Schedule::display(Schedule scheduleArr[], int n)
// {
//     if (n == 0)
//     {
//         cout << "No schedules" << endl;
//     }
//     else
//     {
//         cout << left << setw(15) << "Id" << setw(15) << "Origin" << setw(15) << "Destination" << setw(15) << "Distance" << setw(15) << "Start Date" << setw(15) << "End Date"
//              << "Vehicle Id" << endl;
//         for (int i = 0; i < n; i++)
//         {
//             cout << left << setw(15) << scheduleArr[i].getId() << setw(15) << scheduleArr[i].getOrigin() << setw(15) << scheduleArr[i].getDestination() << fixed << setprecision(2) << setw(15) << scheduleArr[i].getDistance() << setw(15) << scheduleArr[i].getStartDate() << setw(15) << scheduleArr[i].getExpectedEndDate() << scheduleArr[i].getVehicleId() << endl;
//         }
//     }
// }
