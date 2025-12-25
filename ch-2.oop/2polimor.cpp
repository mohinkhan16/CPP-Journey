#include<iostream>
using namespace std;

class Animal{
    public :
   void display(){
    cout <<"This is animal"<< endl;
   } 
};

class Monkey : public Animal{
    public :
    void display(){
        cout <<"this is monkey"<< endl;
    }
};

int main(){
    Monkey m;
    m.display();

    return 0;
}