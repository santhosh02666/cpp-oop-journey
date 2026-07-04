#include<iostream>
using namespace std;
class A{
    public:
        void add(int x,int y){
            cout<<x<<"+"<<y<<"="<<x+y<<endl;
        }
        void add(int x,int y,int z){
            cout<<x<<"+"<<y<<"+"<<z<<"="<<x+y+z<<endl;
        }
        void add(double x,double y){
            cout<<x<<"+"<<y<<"="<<x+y<<endl;
        }
};
int main(){
    A a;
    a.add(5,2);
    a.add(5,3,4);
    a.add(4.5,7.8);
    return 0;
}