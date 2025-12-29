#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
       int Student_id;
       string Student_name;
        string Student_surname;
       string Student_grade;
       int Student_birthyear;
       string Student_location;
       string Student_schoolname;

      int static totalcount;

    public :
    void setData(int id,string name,string surname,string grade,int year,string location,string schoolname){
        Student_id=id;
        Student_name=name;
        Student_surname=surname;
        Student_grade=grade;
        Student_birthyear=year;
        Student_location=location;
       Student_schoolname=schoolname;

       totalcount++;

    }

    void getdata(int i ){
        cout<< Student_id <<endl;
        cout << Student_name << endl;
        cout << Student_surname << endl;
        cout<<  Student_grade << endl;
        cout << Student_birthyear << endl;
        cout << Student_location << endl;
        cout << Student_schoolname << endl;

    }

    static void count (){
        cout << "\n Total Student are :" << totalcount << endl;
    }
};

int Student::totalcount=0;

int main(){

int a;

cout<<"Enter total student details :";
cin>>a;
Student S[a];

for(int i=0;i<a;i++)
  {
      int id,birthyear;
    string name,surname,grade,location,schoolname;

    cout << "Enter details of Student "<< i+1 <<endl;

    cout <<"id             :";
    cin >>id;
    cin.ignore();

    cout<< "name            :";
    getline(cin,name);

    cout << "surname         :";
    getline(cin,surname);


    cout<< "grade            :";
    getline(cin,grade);

    cout <<"birthyear        :";
    cin >>birthyear;
    cin.ignore();

    cout<< "location          :";
    getline(cin,location);

    cout<< "schoolname        :";
    getline(cin,schoolname);


    S[i].setData(id,name,surname,grade,birthyear,location,schoolname);
  }

  for(int i=0;i<a;i++){
    S[i].getdata(i);
  }
  Student::count();

    return 0;
}