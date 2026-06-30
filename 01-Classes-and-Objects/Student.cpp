#include<iostream>
using namespace std;
class Student{
    private:
    string gf;
    int age; 
    public:
    int id;
    string name;
    int NoOfSub;
    Student(int id,string name,int nos){
        this->id=id;
        this->name=name;
        this->NoOfSub=nos;
    }
    Student(Student &A){
        this->id=A.id;
        this->name=A.name;
        this->NoOfSub=A.NoOfSub;
    }
    void study(){
        cout<<"Im studying";
    }
    void sleep(){
        cout<<"Im Sleeping";
    }

};
int main(){
    Student *s=new Student(1,"Santhosh",6);
    cout<<"Student Name :"<<s->name<<endl;
    Student b(*s);
    cout<<"Student Name :"<<b.name;
    return 0;

}