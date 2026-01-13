#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Vehicle {
protected:
    string vehicleID;
    string manufacturer;
    string model;
    int year;
    static int totalVehicles;

public:

    Vehicle(string id, string manu, string mod, int yr) 
        : vehicleID(id), manufacturer(manu), model(mod), year(yr) {
        totalVehicles++;
    }

    virtual ~Vehicle() {
        totalVehicles--;
    }

    string getVehicleID() const { 
        return vehicleID;
     }
    string getManufacturer() const { 
        return manufacturer; 
    }
    string getModel() const { 
        return model;
     }
    int getYear() const { 
        return year; 
    }

    void setManufacturer(string manu) { 
        manufacturer = manu;
     }
    void setModel(string mod) { 
        model = mod;
     }
    void setYear(int yr) {
         year = yr;
         }

    static int getTotalVehicles() {
         return totalVehicles; 
        }

    virtual void display() const {
        cout << "Vehicle ID: " << vehicleID << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    virtual string getType() const = 0;
};

int Vehicle::totalVehicles = 0;

class Car : public Vehicle {
protected:
    string fuelType;

public:
    Car(string id, string manu, string mod, int yr, string fuel)
        : Vehicle(id, manu, mod, yr), 
        fuelType(fuel) {}

    void setFuelType(string fuel)
     { fuelType = fuel; }
    string getFuelType() const { 
        return fuelType; 
    }

    void display() const override {
        Vehicle::display();
        cout << "Fuel Type: " << fuelType << endl;
    }

    string getType() const override { 
        return "Car"; 
    }
};

class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar(string id, string manu, string mod, int yr, int battery)
        : Car(id, manu, mod, yr, "Electric"),
         batteryCapacity(battery) {}

    void setBatteryCapacity(int battery) { 
        batteryCapacity = battery; 
    }
    int getBatteryCapacity() const { 
        return batteryCapacity; 
    }

    void display() const override {
        Vehicle::display();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }

    string getType() const override { 
        return "Electric Car"; 
    }
};


class Aircraft {
protected:
    int flightRange;

public:
    Aircraft(int range) : flightRange(range) {}

    void setFlightRange(int range) { 
        flightRange = range; 
    }
    int getFlightRange() const {
         return flightRange;
         }

    virtual void displayAircraftInfo() const {
        cout << "Flight Range: " << flightRange << " km" << endl;
    }
};

class FlyingCar : public Car, public Aircraft {
public:
    FlyingCar(string id, string manu, string mod, int yr, string fuel, int range)
        : Car(id, manu, mod, yr, fuel),
         Aircraft(range) {}

    void display() const override {
        Car::display();
        displayAircraftInfo();
    }

    string getType() const override {
         return "Flying Car"; 
        }
};

class SportsCar : public ElectricCar {
private:
    int topSpeed;

public:
    SportsCar(string id, string manu, string mod, int yr, int battery, int speed)
        : ElectricCar(id, manu, mod, yr, battery), 
        topSpeed(speed) {}

    void setTopSpeed(int speed) { 
        topSpeed = speed;
     }
    int getTopSpeed() const { 
        return topSpeed;
     }

    void display() const override {
        ElectricCar::display();
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
    }

    string getType() const override {
         return "Sports Car"; 
        }
};

class Sedan : public Car {
private:
    int seatingCapacity;

public:
    Sedan(string id, string manu, string mod, int yr, string fuel, int seats)
        : Car(id, manu, mod, yr, fuel),
         seatingCapacity(seats) {}

    void setSeatingCapacity(int seats) { 
        seatingCapacity = seats; 
    }
    int getSeatingCapacity() const { 
        return seatingCapacity;
     }

    void display() const override {
        Car::display();
        cout << "Seating Capacity: " << seatingCapacity << endl;
    }

    string getType() const override { 
        return "Sedan"; 
    }
};

class SUV : public Car {
private:
    bool fourWheelDrive;

public:
    SUV(string id, string manu, string mod, int yr, string fuel, bool fwd)
        : Car(id, manu, mod, yr, fuel), 
        fourWheelDrive(fwd) {}

    void setFourWheelDrive(bool fwd) { 
        fourWheelDrive = fwd;
     }
    bool hasFourWheelDrive() const {
         return fourWheelDrive;
         }

    void display() const override {
        Car::display();
        cout << "Four Wheel Drive: " << (fourWheelDrive ? "Yes" : "No") << endl;
    }

    string getType() const override { return "SUV"; }
};

class VehicleRegistry {
private:
    vector<shared_ptr<Vehicle>> vehicles;

public:
    void addVehicle(shared_ptr<Vehicle> vehicle) {
        vehicles.push_back(vehicle);
        cout << "\nVehicle added successfully!" << endl;
    }

    void displayAllVehicles() const {
        if (vehicles.empty()) {
            cout << "\nNo vehicles in the registry." << endl;
            return;
        }
        cout << "\n==== ALL VEHICLES ====" << endl;
        for (const auto& vehicle : vehicles) {
            cout << "\nType: " << vehicle->getType() << endl;
            vehicle->display();
            cout << "--------------------------------" << endl;
        }
    }

    void searchByID(string id) const {
        for (const auto& vehicle : vehicles) {
            if (vehicle->getVehicleID() == id) {
                cout << "\n=== VEHICLE FOUND ====" << endl;
                cout << "Type: " << vehicle->getType() << endl;
                vehicle->display();
                return;
            }
        }
        cout << "\nVehicle with ID " << id << " not found." << endl;
    }

    int getTotalCount() const {
        return vehicles.size();
    }
};

int main() {
    VehicleRegistry registry;
    int choice;

    do {
        cout << "\n====== VEHICLE REGISTRY SYSTEM ======" << endl;
        cout << "1. Add a Car" << endl;
        cout << "2. Add an Electric Car" << endl;
        cout << "3. Add a Flying Car" << endl;
        cout << "4. Add a Sports Car" << endl;
        cout << "5. Add a Sedan" << endl;
        cout << "6. Add an SUV" << endl;
        cout << "7. View All Vehicles" << endl;
        cout << "8. Search by ID" << endl;
        cout << "9. Display Total Vehicles" << endl;
        cout << "10. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        string id, manu, model, fuel;
        int year;

        switch (choice) {
            case 1: {
                cout << "\nEnter Vehicle ID: ";
                cin >> id;
                cout << "Enter Manufacturer: ";
                cin.ignore();
                getline(cin, manu);
                cout << "Enter Model: ";
                getline(cin, model);
                cout << "Enter Year: ";
                cin >> year;
                cout << "Enter Fuel Type: ";
                cin.ignore();
                getline(cin, fuel);
                registry.addVehicle(make_shared<Car>(id, manu, model, year, fuel));
                break;
            }
            case 2: {
                int battery;
                cout << "\nEnter Vehicle ID: ";
                cin >> id;
                cout << "Enter Manufacturer: ";
                cin.ignore();
                getline(cin, manu);
                cout << "Enter Model: ";
                getline(cin, model);
                cout << "Enter Year: ";
                cin >> year;
                cout << "Enter Battery Capacity (kWh): ";
                cin >> battery;
                registry.addVehicle(make_shared<ElectricCar>(id, manu, model, year, battery));
                break;
            }
            case 3: {
                int range;
                cout << "\nEnter Vehicle ID: ";
                cin >> id;
                cout << "Enter Manufacturer: ";
                cin.ignore();
                getline(cin, manu);
                cout << "Enter Model: ";
                getline(cin, model);
                cout << "Enter Year: ";
                cin >> year;
                cout << "Enter Fuel Type: ";
                cin.ignore();
                getline(cin, fuel);
                cout << "Enter Flight Range (km): ";
                cin >> range;
                registry.addVehicle(make_shared<FlyingCar>(id, manu, model, year, fuel, range));
                break;
            }
            case 4: {
                int battery, speed;
                cout << "\nEnter Vehicle ID: ";
                cin >> id;
                cout << "Enter Manufacturer: ";
                cin.ignore();
                getline(cin, manu);
                cout << "Enter Model: ";
                getline(cin, model);
                cout << "Enter Year: ";
                cin >> year;
                cout << "Enter Battery Capacity (kWh): ";
                cin >> battery;
                cout << "Enter Top Speed (km/h): ";
                cin >> speed;
                registry.addVehicle(make_shared<SportsCar>(id, manu, model, year, battery, speed));
                break;
            }
            case 5: {
                int seats;
                cout << "\nEnter Vehicle ID: ";
                cin >> id;
                cout << "Enter Manufacturer: ";
                cin.ignore();
                getline(cin, manu);
                cout << "Enter Model: ";
                getline(cin, model);
                cout << "Enter Year: ";
                cin >> year;
                cout << "Enter Fuel Type: ";
                cin.ignore();
                getline(cin, fuel);
                cout << "Enter Seating Capacity: ";
                cin >> seats;
                registry.addVehicle(make_shared<Sedan>(id, manu, model, year, fuel, seats));
                break;
            }
            case 6: {
                char fwdChoice;
                cout << "\nEnter Vehicle ID: ";
                cin >> id;
                cout << "Enter Manufacturer: ";
                cin.ignore();
                getline(cin, manu);
                cout << "Enter Model: ";
                getline(cin, model);
                cout << "Enter Year: ";
                cin >> year;
                cout << "Enter Fuel Type: ";
                cin.ignore();
                getline(cin, fuel);
                cout << "Four Wheel Drive? (y/n): ";
                cin >> fwdChoice;
                registry.addVehicle(make_shared<SUV>(id, manu, model, year, fuel, fwdChoice == 'y'));
                break;
            }
            case 7:
                registry.displayAllVehicles();
                break;
            case 8: {
                cout << "\nEnter Vehicle ID to search: ";
                cin >> id;
                registry.searchByID(id);
                break;
            }
            case 9:
                cout << "\nTotal Vehicles in Registry: " << Vehicle::getTotalVehicles() << endl;
                break;
            case 10:
                cout << "\nExiting... Thank you!" << endl;
                break;
            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }
    } while (choice != 10);

    return 0;

}
