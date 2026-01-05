#include<iostream>
using namespace std;
class X{
    protected:
    int a,b,c;

    public:
    X():
    a(0)
    ,b(0)
    ,c(0){ }
};

class Y : public X {
    public :
  void  setdata(){
        cout<<"enter three number";
        cin>> a >> b >> c;
    }

    void getdata(){
        int sum=(a*a*a)+(b*b*b)+(c*c*c);
        cout<<"sum of cubs of" << a <<" ," << b <<" , and " << c <<" ="<< sum << endl ;
    }
};

int main(){
 
    cout << "sum of cubes"<<endl;
     Y obj1;
     obj1.setdata();
     obj1.getdata();
    return 0;
}