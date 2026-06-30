#include<iostream>
using namespace std;
class Student{
    public:
    int id;
    string dept;
    int sec;
    string name;
    Student(){
        cout<<"Default constructor called"<<endl;
    }
    Student(int id,string dept,int sec,string name){
        this->id=id;
        this->dept=dept;
        this->sec=sec;
        this->name=name;
        cout<<"Parameterised Constructor Called for "<<this->name<<endl;
    }
    Student(Student &a){
         this->id=a.id;
        this->dept=a.dept;
        this->sec=a.sec;
        this->name=a.name;
        cout<<"Copy Constructor Called for "<<this->name;
    }
};
int main(){
    Student *s=new Student();
    Student *a=new Student(1,"IT",3,"Santhosh");
    Student b(*a);
    return 0;
}