#include <iostream>
#include <ctime>
#include <fstream>
#include "User.h"
#include "User.cpp"
#include "ParkingSlot.h"
#include "ParkingSlot.cpp"
#include "Booking.h"
#include "Booking.cpp"
#include "Payment.h"
#include "Payment.cpp"



int main() {
    // Collect user details
    int userId;
    std::string username, password, role;
    
    std::cout << "Enter User ID: ";
    std::cin >> userId;
    std::cout << "Enter Username: ";
    std::cin >> username;
    std::cout << "Enter Password: ";
    std::cin >> password;
    std::cout << "Enter Role (admin/user): ";
    std::cin >> role;
    
    User user(userId, username, password, role);
    user.saveToFile();

    // Collect parking slot details
    int slotId;
    std::string slotNumber, slotStatus;

    std::cout << "Enter Parking Slot ID: ";
    std::cin >> slotId;
    std::cout << "Enter Parking Slot Number: ";
    std::cin >> slotNumber;
    std::cout << "Enter Parking Slot Status (available/occupied): ";
    std::cin >> slotStatus;

    ParkingSlot slot(slotId, slotNumber, slotStatus);
    slot.saveToFile();

    // Book the slot
    std::time_t now = std::time(0);
    Booking booking(1, user, slot, now);
    booking.saveToFile();

    // Process payment
    double amount;
    std::cout << "Enter Payment Amount: ";
    std::cin >> amount;

    Payment payment(1, booking, amount, now);
    payment.saveToFile();

    std::cout << "User " << user.getUsername() << " booked slot " << slot.getSlotNumber() << " with payment of " << amount << std::endl;

    return 0;
}

