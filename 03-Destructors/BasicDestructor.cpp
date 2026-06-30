#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    Student(string name){
        this->name = name;
        cout<<"Default Constructor Called for "<<this->name<<endl;
    }
    ~Student(){
        cout<<"Destructor called for "<<this->name<<endl;
    }
};
int main(){
     Student A("Rohith");
     Student B("Santhosh");
     cout<<"Inside main"<<endl;
     return 0;
}