#ifndef BOOKING_H
#define BOOKING_H

#include <ctime>
#include <fstream>
#include "User.h"
#include "ParkingSlot.h"

class Booking {
private:
    int id;
    User user;
    ParkingSlot slot;
    std::time_t bookingTime;
    std::time_t releaseTime;
public:
    Booking(int id, User user, ParkingSlot slot, std::time_t bookingTime);
    int getId();
    User getUser();
    ParkingSlot getSlot();
    std::time_t getBookingTime();
    std::time_t getReleaseTime();
    void setReleaseTime(std::time_t releaseTime);
    void saveToFile();
};

#endif // BOOKING_H

