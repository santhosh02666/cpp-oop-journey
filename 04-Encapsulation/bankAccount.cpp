#include<iostream>
using namespace std;
class BankAccount{
    private:
        int accountNumber;
        string accountHolder;
        double balance;
    public:
        void setDetails(int a,string h,double b){
            accountNumber=a;
            accountHolder=h;
            balance=b;
        }
        double getBalance(){
            return balance;
        }
        void deposit(double amount){
            if(amount>0){
                balance+=amount;
                cout<<"Deposited successfully"<<endl;
            }
            else{
                cout<<"Invalid deposit amount"<<endl;
            }
        }
        void withdraw(double amount){
            if(amount>0 && amount<=balance){
                balance-=amount;
                cout<<"Withdrawn successfully"<<endl;
            }
            else{
                cout<<"Invalid withdraw amount"<<endl;
            }
        }
        void display(){
            cout<<"Account Number: "<<accountNumber<<endl;
            cout<<"Account Holder: "<<accountHolder<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};
int main(){
    BankAccount *b=new BankAccount();
    b->setDetails(1,"Santhosh",56);
    b->display();
    b->deposit(100);
    b->withdraw(50);
    b->display();
    cout<<"Balance: "<<b->getBalance()<<endl;
    return 0;
}