#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int rollno;
        static int totalCount;
        Student(string s,int rn):name(s),rollno(rn){
            totalCount++;
            cout<<name<<" Admitted"<<endl;
        }
        void details(){
            cout<<"Name :"<<name<<endl;
            cout<<"RollNo :"<<rollno<<endl;
        }
        void totalStudents(){
            cout<<"Total Students :"<<totalCount<<endl;
        }

};
int Student::totalCount=0;
int main(){
    Student *s=new Student("Santhosh",41);
    Student *r=new Student("Rohith",65);
    s->details();
    r->details();
    s->totalStudents();
    return 0;
}