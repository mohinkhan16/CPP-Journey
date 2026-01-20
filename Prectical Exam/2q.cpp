#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string model;
    int year;
    int speed;

public:
    void set(string m, int y, int s)
    {
        model = m;
        year = y;
        speed = s;
    }

    void getdata()
    {

        cout << "model  :" << model << endl;
        cout << "year  :" << year << endl;
        cout << "model  :" << model << endl;
    }
};

int main()
{

    Car C;
    C.set("BMW",2022,250);
    C.getdata();

return 0;
}