#include<iostream>
using namespace std;
class Employee{
    public:
    int employeeID;
    string name;
    Employee(int e,string n){
        employeeID=e;
        name=n;
        cout<<"Employee ctor\n";
    }
    void work(){
        cout<<"Employee "<<name<<" Working\n";
    }
    void displayDetails(){
        cout<<"Employee ID :"<<employeeID<<endl;
        cout<<"Employee name :"<<name<<endl;
    }
    ~Employee(){
        cout<<"Employee dtor\n";
    }
};
class Manager:public Employee{
    public:
        int teamSize;
        Manager(int e,string n,int s):Employee(e,n){
            teamSize=s;
            cout<<"Manager ctor\n";
        }
        void conductMeeting(){
            cout<<"Meeting Started\n";
        }
        ~Manager(){
            cout<<"Manager dtor\n";
        }
};
class Developer:public Employee{
    public:
        string progLang;
        Developer(int e,string n,string p):Employee(e,n){
            progLang=p;
            cout<<"Developer ctor\n";
        }
        void writeCode(){
            cout<<"Writing Code\n";
        }
        ~Developer(){
            cout<<"Developer dtor\n";
        }
};
class Tester:public Employee{
    public:
        string testingTool;
        Tester(int e,string n,string p):Employee(e,n){
            testingTool=p;
            cout<<"Tester ctor\n";
        }
        void testSoftware(){
            cout<<"Testing Software\n";
        }
        ~Tester(){
            cout<<"Tester dtor\n";
        }
};
int main(){
    Manager m(1,"Santhosh",4);
    Developer d(2,"Rohith","Java");
    Tester t(3,"Sai Deepak","debugging tool");
    m.displayDetails();
    m.work();
    m.conductMeeting();

    cout << endl;

    d.displayDetails();
    d.work();
    d.writeCode();

    cout << endl;

    t.displayDetails();
    t.work();
    t.testSoftware();
    return 0;
}