📘 C++ OOP Programs Collection
This repository contains multiple C++ Object-Oriented Programming (OOP) examples. These programs demonstrate core OOP concepts such as:

Classes and Objects

Constructors

Encapsulation

Inheritance

Polymorphism

Abstraction (Pure Virtual Functions)

📂 Programs Included
Student Management System (Constructor & Objects)

Car Information System (Encapsulation using Set/Get)

Device System (Inheritance Example)

Discount System (Polymorphism Example)

Animal System (Abstraction Example)

1️⃣ Student Management System
🔹 Description
This program demonstrates:

Use of constructor

Array of objects

Displaying student details

🔹 Source Code
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
        Student("Alice", 101),
        Student("Bob", 102)
    };

    for (int i = 0; i < 2; i++) {
        students[i].display();
    }

    return 0;
}
🔹 Sample Output
Name: Alice
Roll No: 101
Name: Bob
Roll No: 102
2️⃣ Car Information System
🔹 Description
This program demonstrates:

Encapsulation

Setting and getting values using member functions

🔹 Source Code
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
🔹 Sample Output
Model: BMW
Year: 2022
Speed: 250
3️⃣ Device System (Inheritance Example)
🔹 Description
This program demonstrates:

Inheritance

Protected data members

Reusability of base class properties

🔹 Source Code
🔹 Sample Output
Laptop: Dell 65
SmartPhone: Vivo 20
4️⃣ Discount System (Polymorphism Example)
🔹 Description
This program demonstrates:

Method overriding

Runtime Polymorphism using virtual function

🔹 Source Code
#include <iostream>
using namespace std;

class Device {
public:
    virtual int calculateDiscount() {
        return 0;
    }
};

class Person : public Device {
public:
    int calculateDiscount() {
        return 500;
    }
};

class Call : public Device {
public:
    int calculateDiscount() {
        return 1000;
    }
};

int main() {
    Person p;
    Call c;

    cout << "Total discount is: " << p.calculateDiscount() << endl;
    cout << "Total discount is: " << c.calculateDiscount() << endl;

    return 0;
}
🔹 Sample Output
Total discount is: 500
Total discount is: 1000
5️⃣ Animal System (Abstraction Example)
🔹 Description
This program demonstrates:

Abstraction using pure virtual functions

Dynamic binding using base class pointer

🔹 Source Code
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
    virtual void move() = 0;
};

class Lion : public Animal {
public:
    void makeSound() {
        cout << "Lion sound" << endl;
    }

    void move() {
        cout << "Lion move" << endl;
    }
};

class Fish : public Animal {
public:
    void makeSound() {
        cout << "Fish sound" << endl;
    }

    void move() {
        cout << "Fish swim" << endl;
    }
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
🔹 Sample Output
Lion sound
Lion move

Fish sound
Fish swim

