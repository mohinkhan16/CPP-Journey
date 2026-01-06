📄 README.md
# Railway Reservation System (C++)

## Overview
The Railway Reservation System is a console-based application written in C++.  
It demonstrates Object-Oriented Programming principles and uses the C++ Standard Template Library (STL) to manage train data dynamically.

Users can add trains, display records, and search trains through a simple text-based interface.

---

## Features
- Add new train records
- Display all existing trains
- Search trains by train number
- Uses `std::vector` for storage
- Uses `std::string` instead of C-style strings
- Clean, structured, beginner-friendly codebase

---

## Requirements
- C++ compiler (GCC / Clang / MSVC)
- Windows, Linux, or macOS
- Basic command-line usage

---

## Build & Run

### Compile
```bash
g++ main.cpp -o railway

Run
./railway


On Windows:

railway.exe

Program Flow (Menu)
--- Railway Reservation System Menu ---
1. Add New Train Record
2. Display All Train Records
3. Search Train by Number
4. Exit

Sample Outputs
1️⃣ Adding a Train
Enter Train Number: 101
Enter Train Name: Shatabdi Express
Enter Source: Delhi
Enter Destination: Mumbai
Enter Train Time: 10:30 AM

Train added successfully!

2️⃣ Displaying All Trains
Train 1 details:
Train Number: 101
Train Name: Shatabdi Express
Source: Delhi
Destination: Mumbai
Train Time: 10:30 AM

Total Trains: 1

3️⃣ Searching a Train
Enter Train Number to search: 101

Train Found!
Train Number: 101
Train Name: Shatabdi Express
Source: Delhi
Destination: Mumbai
Train Time: 10:30 AM


If the train does not exist:

Train with number 200 not found!

Possible Enhancements

Persist data to files

Ticket booking module

Update/delete train records

Admin authentication
