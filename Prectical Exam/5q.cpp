#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0;
    virtual void move() = 0;
};

class Lion : public Animal
{
public:
    void makeSound()
    {
        cout << "lion sound" << endl;
    }
    void move()
    {
        cout << "lion move" << endl;
    }
};

class Fish : public Animal
{
public:
    void makeSound()
    {
        cout << "Fish move" << endl;
    }
    void move()
    {
        cout << "Fish swim" << endl;
    }
};

int main()
{
 Animal* animals[2];
    animals[0] = new Lion();
    animals[1] = new Fish();

    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
        animals[i]->move();
        cout << endl;
    }
    
    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }
    return 0;
}
