#include<iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout << "there are so many animal" << endl;
        }
};

class cat : public Animal {
    public:
    void milk(){
        cout << "cat drinks milk" << endl;
    }
};

int main(){

cat c;
c.eat();
c.milk();

return 0;
}