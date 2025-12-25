#include<iostream>
using namespace std;
int main(){
     
    int a;
     
    cout <<"enter Element of array";
    cin >>a;

    int array[a];

    cout << "enetr element :";
    for(int i=0;i<a;i++){
        cin>>array[i];
    }

    cout <<"even element :";
    for(int i=0;i<a;i++){
        if(array[i]%2==0){
            cout << array[i]<<" ";
        }
    }
    return 0;
}