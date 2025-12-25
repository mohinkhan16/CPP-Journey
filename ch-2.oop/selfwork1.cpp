#include<iostream>
using namespace std;

int main() {
    int start;
    int finish;
    int count = 0;

    cout << "Enter start year: ";
    cin >> start;

    cout << "Enter finish year: ";
    cin >> finish;
    
    for (int year=start; year<=finish;year++){

        if((year %400 ==0 )||(year%4==0&& year%100!=0))
        {
            cout << year <<" ";
             count++;
       }
    }

    return 0;
}