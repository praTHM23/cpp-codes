#ifndef BOOKING_H
#define BOOKING_H

#include <string>

class Booking {
private:
    int bookingId;
    std::string containerDimension;
    double tonnage;
    std::string status;
    std::string username;

public:
    Booking();  // default constructor
    Booking(int id, std::string dim, double ton, std::string stat, std::string user);  // parameterized constructor

    // getters and setters
    int getBookingId();
    void setBookingId(int id);
    std::string getContainerDimension();
    void setContainerDimension(std::string dim);
    double getTonnage();
    void setTonnage(double ton);
    std::string getStatus();
    void setStatus(std::string stat);
    std::string getUsername();
    void setUsername(std::string user);
};

#endif // BOOKING_H
