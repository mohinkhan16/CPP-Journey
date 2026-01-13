#include<iostream>
using namespace std;

class calculator{
    public:
    void sum(int a,int b){
        cout<<"\n Divison result  :"<< a/b << endl;
    }

    void sum(int a,int b,int c){
        cout <<"\n substraction  result :" << a-b-c << endl;
    }

    void sum(int a,int b,int c,int d){
        cout <<"\n adition result  :"<< a+b+c+d << endl;
    }

    void sum(int a,int b,int c,int d,int e){
        cout <<"\n Multripication result :"<< a*b*c*d*e << endl;
    }
};

int main(){

    calculator C;
    C.sum(10,20,30,40,50);
    C.sum(10,5);
    C.sum(10,20,30,40);
    C.sum(90,54,65);

    return 0;
}