#include<iostream>
 using namespace std;

class Animal {
    private :
    int age;

    public :
    void setAge(int a){

         age=a;
    }
    void showAge (){
        cout << "Animal age:" << age << endl;
    }  
    
    void eat(){
        cout << "Animal drink milk" << endl;
    }
    };

    class Cat : public Animal{
        public:
        void eats(){
            cout << "cat drinks" << endl;
        }
    };

 int  main(){
    Cat c;

    c.setAge(7);    
    c.showAge();     
    c.eat();         
    c.eats();
    return 0;
 }