#include <iostream>
using namespace std;

class Car {
private:
    double car = 0;

public:
    void Bmw(double cars) {
        car += cars;
    }
    void carsbike() {
        cout << "Car : " << car << endl;
    }
};

int main() {
    Car car1;
    car1.Bmw(500);
    car1.carsbike();

    Car car2;
    car2.Bmw(755);
    car2.carsbike();
    return 0;
}
