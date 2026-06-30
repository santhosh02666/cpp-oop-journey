#include<iostream>
using namespace std;
class Student{
    public:
    Student(){
        cout<<"Default Destructor called"<<endl;
    }
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    Student *a=new Student();
    cout<<"Created Object dynamically"<<endl;
    delete a;
    return 0;
}