#include "ParkingSlot.h"

ParkingSlot::ParkingSlot(int id, std::string slotNumber, std::string status) 
    : id(id), slotNumber(slotNumber), status(status) {}

int ParkingSlot::getId() {
    return id;
}

std::string ParkingSlot::getSlotNumber() {
    return slotNumber;
}

std::string ParkingSlot::getStatus() {
    return status;
}

void ParkingSlot::setStatus(std::string status) {
    this->status = status;
}

void ParkingSlot::saveToFile() {
    std::ofstream file("parking_slots.txt", std::ios::app);
    if (file.is_open()) {
        file << id << " " << slotNumber << " " << status << std::endl;
        file.close();
    }
}
