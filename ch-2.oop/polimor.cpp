#include<iostream>
 using namespace std;

class Book{
    public:
     void display(){
        cout << "This is book" << endl;
    }
};
 
class Pen : public Book{
    public :
    void display(){
        cout << "This is pen" << endl;
    }
};
 
    int main(){

        Pen p;

        p.display();
        
        return 0;
    }







 