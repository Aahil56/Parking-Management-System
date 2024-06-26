#include "Payment.h"

Payment::Payment(int id, Booking booking, double amount, std::time_t paymentTime)
    : id(id), booking(booking), amount(amount), paymentTime(paymentTime) {}

int Payment::getId() {
    return id;
}

Booking Payment::getBooking() {
    return booking;
}

double Payment::getAmount() {
    return amount;
}

std::time_t Payment::getPaymentTime() {
    return paymentTime;
}

void Payment::saveToFile() {
    std::ofstream file("payments.txt", std::ios::app);
    if (file.is_open()) {
        file << id << " " << booking.getId() << " " << amount << " " << paymentTime << std::endl;
        file.close();
    }
}

