# Parking Management System

## Overview

This project is a Parking Management System implemented in C++. It uses Object-Oriented Programming (OOP) concepts and file handling to manage users, parking slots, bookings, and payments.

## Features

- Create and manage user accounts.
- Create and manage parking slots.
- Book parking slots.
- Process payments for booked slots.
- Store data persistently using file handling.

## Concepts Used

### Object-Oriented Programming (OOP)

1. **Classes and Objects**: The system uses classes to represent different entities like User, ParkingSlot, Booking, and Payment.
2. **Encapsulation**: Data members are private, and access to them is provided through public member functions.
3. **Abstraction**: Implementation details are hidden from the user, providing a simple interface for interaction.
4. **Composition**: Classes like Booking and Payment contain objects of other classes (User and ParkingSlot).

### File Handling

- **Reading and Writing Files**: Data for users, parking slots, bookings, and payments are stored in text files (`users.txt`, `parking_slots.txt`, `bookings.txt`, `payments.txt`) for persistence.

## File Structure

- **User.h/User.cpp**: Defines the User class, representing users of the system.
- **ParkingSlot.h/ParkingSlot.cpp**: Defines the ParkingSlot class, representing parking slots.
- **Booking.h/Booking.cpp**: Defines the Booking class, representing the booking of parking slots.
- **Payment.h/Payment.cpp**: Defines the Payment class, representing payments made for bookings.
- **main.cpp**: Contains the main function, user interface, and interaction logic.

## Achievements:

- Successfully created a modular system with clear separation of concerns.
- Achieved efficient data handling using file-based storage.
- Improved problem-solving skills by addressing challenges in data management and  system design.

## Made by MUHAMMAD AAHIL(2K22/SE/117)