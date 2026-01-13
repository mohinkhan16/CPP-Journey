#include<iostream>
using namespace std;

class A{
    public:
    int numA;

    A(int a){
        numA=a;
    }
};

class B :virtual public A
{
    public:
    int numB;

    B(int a,int b): A(a){
          numB=b;  
    }
};

class C:virtual public A{
    public:
    int numC;

    C(int a,int c):A(a){
        numC=c;
    }
};

class D: public B,public C{
    public:
    int numD;

    D(int a,int b,int c,int d ):A(a),B(a,b),C(a,c){
        numD=d;
    }

    void sum(){
        int Total;

        Total=A::numA + numB + numC + numD;

        cout<<"Total"<<Total <<endl;
    }
};

int main(){

        D obj(10,20,30,40);

        obj.sum();      
    return 0;
}