#include <iostream>
using namespace std;

class Device
{
protected:
    string brand;
    int power;
};

class Laptop : public Device
{
public:
    void setDevice(string b, int p)
    {
        brand = b;
        power = p;
    }

    void display()
    {

        cout << "Laptop :"  << brand << " "<<power << endl;
    }
};

class SmartPhone : public Device
{
public:
    void setDevice(string b, int p)
    {
        brand = b;
        power = p;
    }
    void display()
    {
        cout << "SmartPhone :"<< brand <<" "<< power << endl;
    }
};

int main()
{
    Laptop l;
    SmartPhone s;

    l.setDevice("Dell", 65);
    l.display();

    s.setDevice("Vivo", 20);
    s.display();

    return 0;
}
