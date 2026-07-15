#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int rollno;
        int marks;
    public:
        Student(string s,int rn,int m):name(s),rollno(rn),marks(m){}
        void displayDetails(){
            cout<<"Name:"<<name<<endl;
            cout<<"RollNo:"<<rollno<<endl;
            cout<<"Marks :"<<marks<<endl;
        }
    
    friend void displayResult(const Student &s);
};
void displayResult(const Student &s){
    if(s.marks>60){
        cout<<s.name<<" Passed"<<endl;
    }
    else{
        cout<<s.name<<" failed"<<endl;
    }
}
int main(){
    Student *a=new Student("Santhosh",41,45);
    a->displayDetails();
    displayResult(*a);
    return 0;

}