#include "Booking.h"

Booking::Booking(int id, User user, ParkingSlot slot, std::time_t bookingTime)
    : id(id), user(user), slot(slot), bookingTime(bookingTime) {}

int Booking::getId() {
    return id;
}

User Booking::getUser() {
    return user;
}

ParkingSlot Booking::getSlot() {
    return slot;
}

std::time_t Booking::getBookingTime() {
    return bookingTime;
}

std::time_t Booking::getReleaseTime() {
    return releaseTime;
}

void Booking::setReleaseTime(std::time_t releaseTime) {
    this->releaseTime = releaseTime;
}

void Booking::saveToFile() {
    std::ofstream file("bookings.txt", std::ios::app);
    if (file.is_open()) {
        file << id << " " << user.getId() << " " << slot.getId() << " " << bookingTime << " " << releaseTime << std::endl;
        file.close();
    }
}

