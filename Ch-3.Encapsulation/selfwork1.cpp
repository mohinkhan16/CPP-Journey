#include<iostream>
using namespace std;

class Person
{
    private :
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

    public:
    void setdata(int id, string name, int age, string course, string city, string email, string college)
    {

        stu_id = id;
        stu_name = name;
        stu_age = age;
        stu_course = course;
        stu_city = city;
        stu_email = email;
        stu_college = college;
    }

    void getdata(int i)
    {

        cout << "\n\nrecord of student " << i + 1 << endl;
        cout << "\nID: " << stu_id << endl;
        cout << "NAME: " << stu_name << endl;
        cout << "AGE: " << stu_age << endl;
        cout << "COURSE: " << stu_course << endl;
        cout << "CITY: " << stu_city << endl;
        cout << "EMAIL: " << stu_email << endl;
        cout << "COLLEGE: " << stu_college << endl;
    }

};
 


int main(){

    Person p[5];
    for(int i=0;i<5;i++){
        int id,age;
        string name,course,city,email,college;

        cout<<"Enter Details of studet"<< i+1 << endl;

        cout <<"Id:";
        cin>>id;

        cout <<"AGE:";
        cin>>age;

        cout <<"Name :";
        cin >>name;

        cout <<"course :";
        cin >>course;

        cout<<"city:";
        cin>>city;

        cout <<"email:";
        cin>>email;

        cout <<"college:";
        cin>>college;


        p[i].setdata(id,name,age,course,city,email,college);
    }


    for(int i=0;i<5;i++)
    {
        p[i].getdata(i);
    }

    return 0;
}