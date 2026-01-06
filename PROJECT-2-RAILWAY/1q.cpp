#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Train {
private:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

public:
    Train() {
        trainNumber = 0;
        trainName = "not set";
        source = "not set";
        destination = "not set";
        trainTime = "not set";
    }

    void inputTrainDetails() {
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cin.ignore(); 

        cout << "Enter Train Name: ";
        getline(cin, trainName);

        cout << "Enter Source: ";
        getline(cin, source);

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Train Time: ";
        getline(cin, trainTime);
    }

    void displayTrainDetails() const {
        cout << "\nTrain Number: " << trainNumber
             << "\nTrain Name: " << trainName
             << "\nSource: " << source
             << "\nDestination: " << destination
             << "\nTrain Time: " << trainTime << endl;
    }

    int getTrainNumber() const {
        return trainNumber;
    }
};

class RailwaySystem {
private:
    vector<Train> trains;

public:
    void addTrain() {
        Train t;
        t.inputTrainDetails();
        trains.push_back(t);

        cout << "\nTrain added successfully!\n";
    }

    void displayAllTrains() const {
        if (trains.empty()) {
            cout << "No train records available.\n";
            return;
        }

        for (size_t i = 0; i < trains.size(); i++) {
            cout << "\nTrain " << i + 1 << " details:";
            trains[i].displayTrainDetails();
        }

        cout << "\nTotal Trains: " << trains.size() << endl;
    }

    void searchTrainByNumber() const {
        if (trains.empty()) {
            cout << "No train records available.\n";
            return;
        }

        int number;
        cout << "Enter Train Number to search: ";
        cin >> number;

        for (const auto &t : trains) {
            if (t.getTrainNumber() == number) {
                cout << "\nTrain Found!";
                t.displayTrainDetails();
                return;
            }
        }

        cout << "Train with number " << number << " not found!\n";
    }
};

int main() {
    RailwaySystem system;
    int choice;

    do {
        cout << "\n--- Railway Reservation System Menu ---\n";
        cout << "1. Add New Train Record\n";
        cout << "2. Display All Train Records\n";
        cout << "3. Search Train by Number\n"
             << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1: system.addTrain();
        break;
        case 2: system.displayAllTrains();
        break;
        case 3: system.searchTrainByNumber(); 
        break;
        case 4: cout << "Exiting the system. Goodbye!\n";
        break;
        default: cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
