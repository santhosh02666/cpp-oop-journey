#include<iostream>
using namespace std;
class Student{
    
    private:
        string name;
        int age;
        int rollNo;
    public:
        void setName(string n){
            name = n;
        }
        string getName(){
            return name;
        }
        void setAge(int a){
            age = a;
        }
        int getAge(){
            return age;
        }
        void setRollNo(int r){
            rollNo = r;
        }
        int getRollNo(){
            return rollNo;
        }
};
int main(){
    Student *d= new Student();
    d->setName("John");
    d->setAge(20);
    d->setRollNo(123);
    cout<<"Name: "<<d->getName()<<endl;
    cout<<"Age: "<<d->getAge()<<endl;
    cout<<"Roll No: "<<d->getRollNo()<<endl;
    return 0;
}