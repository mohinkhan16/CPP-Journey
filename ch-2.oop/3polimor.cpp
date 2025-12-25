#include<iostream>
using namespace std;

class Laptop{
    public:
    void display(){
        cout << "This is old laptop" << endl;
    }
};

class Mobile : public Laptop{
    public :
    void display(){
        cout << "This is new mobile" << endl;
    }
};


int main(){

    Mobile M;
    M.display();

    return 0;
}