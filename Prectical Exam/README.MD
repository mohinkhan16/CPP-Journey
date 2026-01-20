C++ Programs Collection

This repository contains multiple C++ programs demonstrating various concepts including classes, constructors, inheritance, polymorphism, and abstract classes. Each program includes a brief description and the output.

1. Student Class Program

Description:
This program demonstrates a simple Student class with a constructor, private members, and a method to display student information.

Code:

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
public:
    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNumber << endl;
    }
};

int main() {
    Student students[2]{ 
        Student("alice", 101), 
        Student("bob", 102) 
    };

    for (int i = 0; i < 2; i++) {
        students[i].display();
    }

    return 0;
}


Output:

Name: alice
Roll No: 101
Name: bob
Roll No: 102

2. Car Class Program

Description:
This program demonstrates a Car class with a method to set and get data.

Code:

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;
    int speed;
public:
    void set(string m, int y, int s) {
        model = m;
        year = y;
        speed = s;
    }
    void getdata() {
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main() {
    Car C;
    C.set("BMW", 2022, 250);
    C.getdata();
    return 0;
}


Output:

Model: BMW
Year: 2022
Speed: 250

3. Device Inheritance Program

Description:
This program demonstrates single inheritance with a base class Device and derived classes Laptop and SmartPhone.

Code:

#include <iostream>
using namespace std;

class Device {
protected:
    string brand;
    int power;
};

class Laptop : public Device {
public:
    void setDevice(string b, int p) {
        brand = b;
        power = p;
    }
    void display() {
        cout << "Laptop: " << brand << " " << power << endl;
    }
};

class SmartPhone : public Device {
public:
    void setDevice(string b, int p) {
        brand = b;
        power = p;
    }
    void display() {
        cout << "SmartPhone: " << brand << " " << power << endl;
    }
};

int main() {
    Laptop l;
    SmartPhone s;

    l.setDevice("Dell", 65);
    l.display();

    s.setDevice("Vivo", 20);
    s.display();

    return 0;
}


Output:

Laptop: Dell 65
SmartPhone: Vivo 20

4. Polymorphism with Discount Program

Description:
This program demonstrates runtime polymorphism using virtual functions for calculating discounts.

Code:

#include <iostream>
using namespace std;

class Device {
public:
    int calculateDiscount() {
        return 0;
    }
};

class Person : public Device {
public:
    virtual int calculateDiscount() {
        return 500;
    }
};

class Call : public Device {
public:
    virtual int calculateDiscount() {
        return 1000;
    }
};

int main() {
    Person p;
    Call C;

    cout << "Total calculate is: " << p.calculateDiscount() << endl;
    cout << "Total calculate discount is: " << C.calculateDiscount() << endl;

    return 0;
}


Output:

Total calculate is: 500
Total calculate discount is: 1000

5. Abstract Class with Animal Program

Description:
This program demonstrates abstract classes and pure virtual functions with Animal as the base class and Lion and Fish as derived classes.

Code:

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
    virtual void move() = 0;
};

class Lion : public Animal {
public:
    void makeSound() { cout << "Lion sound" << endl; }
    void move() { cout << "Lion move" << endl; }
};

class Fish : public Animal {
public:
    void makeSound() { cout << "Fish move" << endl; }
    void move() { cout << "Fish swim" << endl; }
};

int main() {
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


Output:

Lion sound
Lion move

Fish move
Fish swim
