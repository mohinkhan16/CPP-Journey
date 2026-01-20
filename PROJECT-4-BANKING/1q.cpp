#include<iostream>
#include<vector>
using namespace std;

class BankAccount{
protected:
    int accountNumber;
    string accountHolderName;
private:
    double balance;

public:
    BankAccount(int accNo,string name,double bal){
        accountNumber=accNo;
        accountHolderName=name;
        balance=bal;
    }

    virtual void calculateInterest()=0;

    void deposit(double amount){
        balance += amount;
        cout <<"Amount Deposited Successfully\n";
    }

    virtual void withdraw(double amount){
        if(amount <= balance){
            balance -= amount;
            cout <<"Amount Withdrawn Successfully\n";
        }else{
            cout<<"Insufficient Balance\n";
        }
    }

    double getBalance(){
        return balance;
    }

    void displayAccountInfo(){
        cout<<"\nAccount Number : "<<accountNumber;
        cout<<"\nHolder Name    : "<<accountHolderName;
        cout<<"\nBalance        : "<<balance<<endl;
    }
};

class SavingsAccount : public BankAccount{
    double interestRate;
public:
    SavingsAccount(int accNo,string name,double bal,double rate)
        : BankAccount(accNo,name,bal){
        interestRate = rate;
    }

    void calculateInterest() override{
        double interest = getBalance()*interestRate/100;
        cout<<"Savings Interest : "<<interest<<endl;
    }
};

class CheckingAccount : public BankAccount{
    double overdraftLimit;
public:
    CheckingAccount(int accNo,string name,double bal,double limit)
        : BankAccount(accNo,name,bal){
        overdraftLimit=limit;
    }

    void withdraw(double amount) override{
        if(amount <= getBalance()+overdraftLimit){
            cout<<"Withdrawal Successful\n";
        }else{
            cout<<"Overdraft Limit Exceeded\n";
        }
    }

    void calculateInterest() override{
        cout<<"Checking Account has no interest.\n";
    }
};

class FixedDepositAccount : public BankAccount{
    int term;
public:
    FixedDepositAccount(int accNo,string name,double bal,int t)
        : BankAccount(accNo,name,bal){
        term=t;
    }

    void calculateInterest() override{
        double interest= getBalance()*0.07 * term / 12;
        cout<<"Fixed Deposit Interest : "<<interest <<endl;
    }
};

int main(){
    vector<BankAccount*> accounts;
    int choice;

    do{
        cout<<"\n--- Banking System Menu ---\n";
        cout<<"1. Create Savings Account\n";
        cout<<"2. Create Checking Account\n";
        cout<<"3. Create Fixed Deposit Account\n";
        cout<<"4. Deposit\n";
        cout<<"5. Withdraw\n";
        cout<<"6. Display Account Info\n";
        cout<<"7. Calculate Interest\n";
        cout<<"8. Exit\n";
        cout<<"Enter Your Choice : ";
        cin>>choice;

        int accNo,term;
        string name;
        double bal,rate,limit,amt;

        switch(choice){
        case 1:
            cout<<"Enter Account No: "; 
            cin>>accNo;
            cout<<"Enter Holder Name: "; 
            cin.ignore();
            getline(cin,name);
            cout<<"Enter Balance: ";
            cin>>bal;
            cout<<"Enter Interest Rate: "; 
            cin>>rate;
            accounts.push_back(new SavingsAccount(accNo,name,bal,rate));
            break;

        case 2:
            cout<<"Enter Account No: ";
             cin>>accNo;
            cout<<"Enter Holder Name: ";
             cin.ignore();
              getline(cin,name);
            cout<<"Enter Balance: "; 
            cin>>bal;
            cout<<"Enter Overdraft Limit: "; 
            cin>>limit;
            accounts.push_back(new CheckingAccount(accNo,name,bal,limit));
            break;

        case 3:
            cout<<"Enter Account No: "; 
            cin>>accNo;
            cout<<"Enter Holder Name: ";
             cin.ignore(); 
             getline(cin,name);
            cout<<"Enter Balance: "; 
            cin>>bal;
            cout<<"Enter Term (months): ";
             cin>>term;
            accounts.push_back(new FixedDepositAccount(accNo,name,bal,term));
            break;

        case 4:
            cout<<"Enter Deposit Amount: ";
             cin>>amt;
            accounts.back()->deposit(amt);
            break;

        case 5:
            cout<<"Enter Withdraw Amount: "; 
            cin>>amt;
            accounts.back()->withdraw(amt);
            break;

        case 6:
            accounts.back()->displayAccountInfo();
            break;

        case 7:
            accounts.back()->calculateInterest();
            break;
        }
    }while(choice!=8);

    for(auto acc:accounts) delete acc;
    return 0;
}
