#include<iostream>
using namespace std;

class Music{
    public:
    virtual void bass()= 0;
    void play() {
        cout<<"Playing...";
    }
};
class musicdevice: public Music{
    public:
    void bass(){
        cout<<"extra bass.........";
    }
};
class musicplayer{ // only knows about musicdevice
    musicdevice ad;
    public:
    void playmusic(){
        ad.bass();
        ad.play();
    }

};
int main(){
    musicplayer mp;
    mp.playmusic();
}