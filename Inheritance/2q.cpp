#include <iostream>
using namespace std;

class P {
protected:
    float celsius;

public:
    void getdata() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }
};

class R : public P {
private:
    float fahrenheit;
    float kelvin;

public:
    void convertToFahrenheit() {
        fahrenheit = (celsius * 9.0 / 5) + 32;
    }

    void convertToKelvin() {
        kelvin = celsius + 273.15;
    }

    void displayFahrenheit() {
        cout << "Fahrenheit = " << fahrenheit << endl;
    }

    void displayKelvin() {
        cout << "Kelvin = " << kelvin << endl;
    }

    void displayAll() {
        cout << "\nTemperature Conversion\n";
        cout << "Celsius     : " << celsius << endl;
        cout << "Fahrenheit  : " << fahrenheit << endl;
        cout << "Kelvin      : " << kelvin << endl;
    }
};

int main() {
    R obj;

    obj.getdata();

    obj.convertToFahrenheit();
    obj.displayFahrenheit();

    obj.convertToKelvin();
    obj.displayKelvin();

    obj.displayAll();

    return 0;
}
