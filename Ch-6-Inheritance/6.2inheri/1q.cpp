#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int emp_id;
    string emp_name;
    int age;
    double salary;

public:
    virtual ~Employee() {}

    void setEmployee(int id, string n, int a, double s)
    {
        emp_id = id;
        emp_name = n;
        age = a;
        salary = s;
    }

    virtual void display()
    {
        cout << "\nEmployee Details" << endl;
        cout << "ID: " << emp_id << endl;
        cout << "Name: " << emp_name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

class FullTimeEmployee : public Employee
{
    double bonus;

public:
    void setFullTimeEmployee(int id, string n, int a, double s, double b)
    {
        setEmployee(id, n, a, s);
        bonus = b;
    }

    void display() override
    {
        cout << "\nFull Time Employee" << endl;
        Employee::display();
        cout << "Bonus: " << bonus << endl;
    }
};

class PartTime : public Employee
{
    float hours;

public:
    void setPartTimeEmployee(int id, string n, int a, double s, float h)
    {
        setEmployee(id, n, a, s);
        hours = h;
    }

    void display() override
    {
        cout << "\nPart Time Employee" << endl;
        Employee::display();
        cout << "Hours Worked: " << hours << endl;
    }
};

int main()
{
    const int MAX = 10;
    Employee* emp[MAX];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== Employee Management System =====" << endl;
        cout << "1. Add Full Time Employee" << endl;
        cout << "2. Add Part Time Employee" << endl;
        cout << "3. Display All Employees" << endl;
        cout << "4. Delete Last Employee" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1 && count < MAX)
        {
            int id, age;
            double salary, bonus;
            string name;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Salary: ";
            cin >> salary;
            cout << "Enter Bonus: ";
            cin >> bonus;

            FullTimeEmployee* fte = new FullTimeEmployee();
            fte->setFullTimeEmployee(id, name, age, salary, bonus);
            emp[count++] = fte;
        }
        else if (choice == 2 && count < MAX)
        {
            int id, age;
            double salary;
            float hours;
            string name;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Salary: ";
            cin >> salary;
            cout << "Enter Hours Worked: ";
            cin >> hours;

            PartTime* pte = new PartTime();
            pte->setPartTimeEmployee(id, name, age, salary, hours);
            emp[count++] = pte;
        }
        else if (choice == 3)
        {
            for (int i = 0; i < count; i++)
            {
                emp[i]->display();
            }
        }
        else if (choice == 4)
        {
            if (count > 0)
            {
                delete emp[count - 1];
                count--;
                cout << "Employee deleted successfully." << endl;
            }
            else
            {
                cout << "No employee to delete." << endl;
            }
        }

    } while (choice != 5);

    for (int i = 0; i < count; i++)
    {
        delete emp[i];
    }

    cout << "Program exited. Memory freed." << endl;
    return 0;
}
