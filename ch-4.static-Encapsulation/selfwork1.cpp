#include<iostream>
#include<string>
using namespace std;

class Hotel
{
    private:
    int Hotel_id;
    string Hotel_name;
    string Hotel_type;
    int Hotel_rating;
    string Hotel_location;
    int Hotel_establish_year;
    int Hotel_staff_quantity;
    int HOtel_room_quantity;

    int static totalcount;

    public:
    void setData(int id,string name,string type,int rating,string location,int year,int staff,int room){

        Hotel_id = id;
        Hotel_name =name;
        Hotel_type =type;
        Hotel_rating =rating;
        Hotel_location =location;
        Hotel_establish_year =year;
        Hotel_staff_quantity =staff;
        HOtel_room_quantity =room;

        totalcount++;
    }

    void getData(int i){
        cout << Hotel_id <<endl;
        cout << Hotel_name <<endl;
        cout << Hotel_type << endl;
        cout << Hotel_rating << endl;
        cout << Hotel_location <<endl;
        cout << Hotel_establish_year << endl;
        cout << Hotel_staff_quantity << endl;
        cout << HOtel_room_quantity << endl;

    }

    static void count(){
        cout << "\n Total Hotel are :" <<totalcount << endl;
    }
};

int Hotel::totalcount=0;

int main(){

int n;  

cout << "Enter Total Hotel index :";
cin>>n;
Hotel h[n];

for(int i=0;i<n;i++){
    int id,rating,year,staff,room;
    string name,type,location;

    cout << "\nEnter Detail of hotel :" << i+1 <<endl;

    cout<< "ID                 :";
    cin >>id;
    cin.ignore();

    cout <<"name               :";
    getline(cin,name);

    cout << "Type              :";
    getline(cin,type);

    cout<< "rating             :";
    cin>>rating;
    cin.ignore();

    cout <<"location           :";
    getline(cin,location);

    cout <<"establish year     :";
    cin >> year;
    cin.ignore();

    cout <<"staff quantity     :";
    cin >> staff;
    cin.ignore();

    cout <<"room quantit       :";
    cin >> room;
    cin.ignore();

    h[i].setData(id,name,type,rating,location,year,staff,room);
}

for (int i = 0; i <n; i++)
{
    h[i].getData(i);
}
      Hotel::count();
    return 0;
}