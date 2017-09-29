#include <wiringPi.h>  
  
  
class SmartCar{  
public:  
  //default constructor  
  SmartCar(){  
    wiringPiSetup () ;  
    pinMode (FL, OUTPUT) ;  
    pinMode (FR, OUTPUT) ;  
    pinMode (BL, OUTPUT) ;  
    pinMode (BR, OUTPUT) ;  
    stop();  
  };  
  //constuctor with pin numbers  
  SmartCar(const int &FL,  
           const int &FR,  
           const int &BL,  
           const int &BR) : state(0),  FL(FL), FR(FR), BL(BL), BR(BR){  
    wiringPiSetup () ;  
    pinMode (FL, OUTPUT) ;  
    pinMode (FR, OUTPUT) ;  
    pinMode (BL, OUTPUT) ;  
    pinMode (BR, OUTPUT) ;  
    stop();  
  };  
  //destructor  
  ~SmartCar(){stop();};  
  
  void go(const int& d);  
  void stop();  
  int getCurState(){return state;}  
private:  
  int state = 0;  
  int FL = 21;  
  int FR = 22;  
  int BL = 23;  
  int BR = 24;  
  void goForward();  
  void goBackward();  
  void goLeft();  
  void goRight();  
};
