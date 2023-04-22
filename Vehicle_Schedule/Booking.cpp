#include "Booking.h"

// default constructor
Booking::Booking()
{
    bookingId = 0;
    containerDimension = "";
    tonnage = 0.0;
    status = "";
    username = "";
}

// parameterized constructor
Booking::Booking(int id, std::string dim, double ton, std::string stat, std::string user)
{
    bookingId = id;
    containerDimension = dim;
    tonnage = ton;
    status = stat;
    username = user;
}

// getters and setters
int Booking::getBookingId()
{
    return bookingId;
}

void Booking::setBookingId(int id)
{
    bookingId = id;
}

std::string Booking::getContainerDimension()
{
    return containerDimension;
}

void Booking::setContainerDimension(std::string dim)
{
    containerDimension = dim;
}

double Booking::getTonnage()
{
    return tonnage;
}

void Booking::setTonnage(double ton)
{
    tonnage = ton;
}

std::string Booking::getStatus()
{
    return status;
}

void Booking::setStatus(std::string stat)
{
    status = stat;
}

std::string Booking::getUsername()
{
    return username;
}

void Booking::setUsername(std::string user)
{
    username = user;
}
