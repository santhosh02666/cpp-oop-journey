#include<iostream>
using namespace std;
class Complex{
    public:
        int real;
        int imag;
        Complex(int r,int i){
            real=r;
            imag=i;
        }
        Complex operator +( const Complex &b ){
            Complex c(0,0);
            c.real=this->real+b.real;
            c.imag=this->imag+b.imag;
            return c;
        }
        void display(){
            cout<<real<<" + "<<" i"<<imag<<endl;
        }
};
int main(){
    Complex c(5,2);
    c.display();
    Complex d(4,3);
    d.display();
    Complex a=c+d;
    a.display();

}