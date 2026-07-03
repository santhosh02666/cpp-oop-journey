#include<iostream>
using namespace std;
class Camera{
    public:
        int cameraMegaPixels;
        Camera(int c){
            this->cameraMegaPixels=c;
            cout<<"Camera ctor\n";
        }
        void takePhoto(){
            cout<<"Photo Captured\n";
        }
        void recordvideo(){
            cout<<"Video recorded\n";
        }
        void powerOn(){
            cout<<"Camera Power on\n";
        }
        ~Camera(){
            cout<<"Camera dtor\n";
        }
};
class MusicPlayer{
    public:
        int volume;
        MusicPlayer(int v){
            this->volume=v;
            cout<<"MusicPlayer ctor\n";
        }
        void playMusic(){
            cout<<"Playing Music\n";
        }
        void pauseMusic(){
            cout<<"Music Paused\n";
        }
        void powerOn(){
            cout<<"Music player Power on\n";
        }
        ~MusicPlayer(){
            cout<<"MusicPlayer dtor\n";
        }
};
class Smartphone :public Camera,public MusicPlayer{
    public:
        string brand;
        string model;
        Smartphone(string b,string m,int mp,int v):Camera(mp),MusicPlayer(v){
            this->brand=b;
            this->model=m;
            cout<<"Smartphone ctor\n";
        }
        void makeCall(){
            cout<<"Calling.......\n";
        }
        ~Smartphone(){
            cout<<"Smartphone dtor\n";
        }
};
int main(){
    Smartphone s("Samsung","S24",200,50);
    s.Camera::powerOn();
    s.takePhoto();
    s.recordvideo();
    s.MusicPlayer::powerOn();
    s.playMusic();
    s.pauseMusic();
    s.makeCall();
    return 0;
}