#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H

#include <string>
#include <fstream>

class ParkingSlot {
private:
    int id;
    std::string slotNumber;
    std::string status; // 'available' or 'occupied'
public:
    ParkingSlot(int id, std::string slotNumber, std::string status);
    int getId();
    std::string getSlotNumber();
    std::string getStatus();
    void setStatus(std::string status);
    void saveToFile();
};

#endif // PARKINGSLOT_H

