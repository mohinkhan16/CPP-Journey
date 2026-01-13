#include<iostream>
using namespace std;

class Cricket {
    public:
    virtual int getTotalOvers(){
        return 0;
    }
};

class T20Match : public Cricket {
    public:
    int getTotalOvers()
    {
        return 20;
    }
};

class TestMatch : public Cricket{
    public:
    int getTotalOvers()
    {
        return 80;
    }
};

class IPL : public Cricket{
    public:
    int getTotalOvers(){
        return 20;
    }
};

int main(){

    Cricket* obj;
    T20Match t20;
    TestMatch test;
    IPL ipl;


    obj =&t20;
    cout <<"T20 Match over is :"<<obj->getTotalOvers()<< endl;

    obj=&test;
    cout<<"Test Match over is :"<<obj->getTotalOvers()<< endl;

    obj=&ipl;
    cout<<"IPL Match over is  :"<<obj->getTotalOvers()<<endl;

    return 0;
}