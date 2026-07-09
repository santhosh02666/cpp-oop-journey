#include<iostream>
using namespace std;
int x=4;//Global variable
int main(){
    cout<<"Global variable:"<<::x<<endl;
    int x=45;
    cout<<"Local variable:"<<x<<endl;//It gets more priority than global.
    {
        int x=67;
        ::x=69;
        cout<<x<<endl;
        cout<<::x<<endl;
    }
    return 0;
}