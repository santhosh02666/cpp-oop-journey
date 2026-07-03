#include<iostream>
using namespace std;
class Vehicle{
    public:
        string company;
        string model;
        Vehicle(string c,string m){
            this->company=c;
            this->model=m;
        }
        void start(){
            cout<<"Engine Started \n";
        }
        void stop(){
            cout<<"Engine Stopped \n";
        }
};
class Car:public Vehicle{
    public:
        string fuelType;
        Car(string c,string m,string f):Vehicle(c,m){
            this->fuelType=f;
        }
        void drive(){
            cout<<"Driving....\n";
        }
};
class ElectricCar:public Car{
    public:
        int batteryPercentage;
        ElectricCar(string c,string m,string f,int b):Car(c,m,f){
            this->batteryPercentage=b;
        }
        void chargeBattery(){
            cout<<"Battery charged fully\n";
        }
};
int main(){
    ElectricCar tesla("Tesla","Model 3","Electric",85);
    tesla.start();
    tesla.drive();
    tesla.chargeBattery();
    tesla.stop();
    return 0;
}