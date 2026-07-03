#include<iostream>
using namespace std;
class person{
    public:
        string name;
        person(string n){
            name=n;
            cout<<"Im inside parent ctor"<<endl;
        }
        void greet(){
            cout<<"Hello,My name is "<<name<<endl;
        }
        ~person(){
            cout<<"Im inside parent dtor"<<endl;
        }
};
class student:public person{
    public:
        int id;
        string dept;
        student(string name,int id,string dept):person(name){
            this->id=id;
            this->dept=dept;
            cout<<"Im inside child ctor"<<endl;
        }
        void study(){
            cout<<"Im studying"<<endl;
        }
        void display(){
            cout<<"Student name :"<<name<<endl;
            cout<<"Student ID :"<<id<<endl;
            cout<<"Student Department :"<<dept<<endl;
        }
        ~student(){
            cout<<"Im inside child dtor"<<endl;
        }
};
int main(){
    student *s=new student("Santhosh",41,"IT");
    s->greet();
    s->study();
    s->display();
    delete s;
    return 0;
}