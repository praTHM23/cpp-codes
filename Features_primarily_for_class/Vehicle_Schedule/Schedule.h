#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <iostream>
#include <iomanip>

using namespace std;

class Schedule
{
private:
    int id;
    string origin;
    string destination;
    double distance;
    string startDate;
    string expectedEndDate;
    string vehicleId;

public:
    Schedule();
    Schedule(int id, string origin, string destination, double distance, string startDate, string expectedEndDate, string vehicleId);

    // Getters
    int getId();
    string getOrigin();
    string getDestination();
    double getDistance();
    string getStartDate();
    string getExpectedEndDate();
    string getVehicleId();

    // Setters
    void setId(int id);
    void setOrigin(string origin);
    void setDestination(string destination);
    void setDistance(double distance);
    void setStartDate(string startDate);
    void setExpectedEndDate(string expectedEndDate);
    void setVehicleId(string vehicleId);

    void display(Schedule scheduleArr[], int n);
};

#endif
