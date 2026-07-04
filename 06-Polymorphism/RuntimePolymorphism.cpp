#include<iostream>
using namespace std;
class Animals{
    public:
    string nature;
    Animals(string n){
        nature=n;
    }
    virtual void makeSound(){
        cout<<"Animal makes sound";
    }
    void display(){
        cout<<"Nature :"<<nature<<endl;
    }
};
class Dog:public Animals{
    public:
    string breed;
    Dog(string n,string b):Animals(n){
        breed=b;
    }
    void makeSound() override{
        cout<<"Bow Bow"<<endl;
    }
};
class Cat:public Animals{
    public:
    string breed;
    Cat(string n,string b):Animals(n){
        breed=b;
    }
    void makeSound() override{
        cout<<"Meow...Meow"<<endl;
    }
};
class Cow:public Animals{
    public:
    string breed;
    Cow(string n,string b):Animals(n){
        breed=b;
    }
    void makeSound() override{
        cout<<"Amba Amba"<<endl;
    }
};
int main(){
    Cat c("Domestic","Indie");
    Dog d("Domestic","German");
    Cow cw("Domestic","Gir Cow");
    Animals *a;
    a=&c;
    a->makeSound();
    a=&d;
    a->makeSound();
    a=&cw;
    a->makeSound();



}