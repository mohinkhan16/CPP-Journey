#include <iostream>
using namespace std;

class Device
{
public:
     int calculateDiscount()
    {
        return 0;
    }

};

class person:public Device{
    public:

    virtual int calculateDiscount(){
        return 500;
    }
};

class call:public Device{
    public:

    virtual int calculateDiscount(){
        
        return 1000 ;

    }
};


int main()
{

    person p;
    call C;

    cout<<"total calculate is           :"<<p.calculateDiscount()<<endl;
    cout<<"total calculate discount is  :" <<C.calculateDiscount()<<endl;
    
    return 0;
}
