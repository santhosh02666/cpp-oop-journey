#include<iostream>
using namespace std;
class Payment{
    public:
    virtual void pay(double amount)=0;
    ~Payment(){
        cout<<"Payment dtor"<<endl;
    }
};
class Creditcard:public Payment{
    public:
        void pay(double amount)override{
            cout << "Paid Rs." << amount << " using Credit Card." << endl;
        }
        ~Creditcard(){
            cout<<"Creditcart dtor\n";
        }
};
class UPI:public Payment{
    public:
        void pay(double amount)override{
            cout << "Paid Rs." << amount << " using UPI." << endl;
        }
        ~UPI(){
            cout<<"UPI dtor\n";
        }
};
int main(){
    Payment *p;

    Creditcard card;
    UPI upi;

    p = &card;
    p->pay(1500);

    p = &upi;
    p->pay(750);

    return 0;
    
}