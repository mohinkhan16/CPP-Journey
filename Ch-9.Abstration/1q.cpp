#include<iostream>
using namespace std;

class Admin{
    private:
    string comp_name;
    double total_anual_revenue;

    protected:
    int total_staff;
    bool can_terminate;

    public:
    double manager_salary;
    double empolyee_salary;

    Admin(){
        comp_name="Infosys pvt Ltd";
        manager_salary=50000;
        empolyee_salary=25000;
        total_staff=20;
        total_anual_revenue=100000;
        can_terminate=true;
    }
    virtual void myAccess(){
        cout<<"\n----Admin Access-----"<<endl;
        cout<<"Company Name           :"<< comp_name << endl;
        cout<<"Manager Salary         :"<< manager_salary << endl;
        cout<<"Emoplyee Salary        :"<< empolyee_salary << endl;
        cout<<"Total staff            :"<< total_staff << endl;
        cout<<"Total Annual Revenue   :"<< total_anual_revenue << endl;
        cout<<"can Terminate Empolyee :"<< can_terminate << endl;
     }
};
class Manager :public Admin{
    public:
    void myAccess()override{
        cout <<"\n----Manager Access----" << endl;
        cout<<"Manager Salary        :" << manager_salary << endl;
        cout<<"Empolyee Salary       :"<< empolyee_salary << endl;
        cout<<"Total Staff           :"<<total_staff <<endl;
        cout<<"Can Terminal Empolyee :"<< can_terminate <<endl;
    }
};

class Empolyee : public Manager{
    public:
    void myAccess()override{
        cout <<"\n----Empolyee Access---"<< endl;
        cout<<"Emolyee Salary  :"<< empolyee_salary << endl;
        cout<<"Total staff     :"<< total_staff << endl;
    }
};

int main(){

    Admin a;
    Manager m;
    Empolyee e;

    a.myAccess();
    m.myAccess();
    e.myAccess();

    return 0;
}