#ifndef LOGISTICSBO_H
#define LOGISTICSBO_H

#include "Schedule.h"
#include "Booking.h"
#include <iostream>

class LogisticsBO
{
public:
    static Schedule *generateScheduleDetails();
    static Booking *generateBookingDetails();
    template <class T>
    static void displayDetails(T* obj);
};

#endif
