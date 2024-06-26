#ifndef PAYMENT_H
#define PAYMENT_H

#include <ctime>
#include <fstream>
#include "Booking.h"

class Payment {
private:
    int id;
    Booking booking;
    double amount;
    std::time_t paymentTime;
public:
    Payment(int id, Booking booking, double amount, std::time_t paymentTime);
    int getId();
    Booking getBooking();
    double getAmount();
    std::time_t getPaymentTime();
    void saveToFile();
};

#endif // PAYMENT_H

