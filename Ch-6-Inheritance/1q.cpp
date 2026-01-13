#include<iostream>
using namespace std;

class Vehicel{
    protected :
    float speed;

    public :
    void showspeed() {
        speed=0;
        cout <<"speed is :" << speed <<endl;
    }
};

class Bike :virtual public Vehicel {
    public :
    void showspeed() {
        speed=80;
        cout <<" bike speed is :"<< speed << endl;
    }
};

class CAR : virtual public Vehicel {
    public :
    void showspeed() {
        speed=120;
        
        cout <<" car speed is :"<< speed << endl;
    }
};

class truck : virtual public Vehicel {
    public :
    void showspeed() {
        speed=70;
        cout <<" truck speed is :"<< speed << endl;
    }
};

int main(){

     Bike B;
     B.showspeed();

     CAR C;
     C.showspeed();

     truck t;
     t.showspeed();

    return 0;
}