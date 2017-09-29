#include <SmartCar.hpp>  
#include <iostream>  
  
using namespace std;  
  
  
//define class methods  
void SmartCar::stop(){  
  digitalWrite (FL,  LOW) ;  
  digitalWrite (FR,  LOW) ;  
  digitalWrite (BL,  LOW) ;  
  digitalWrite (BR,  LOW) ;  
  state = 0;  
}  
  
void SmartCar::goForward(){  
  stop();  
  digitalWrite (BL,  HIGH) ;  
  digitalWrite (BR,  HIGH) ;  
  state = 1;  
}  
  
void SmartCar::goBackward(){  
  stop();  
  digitalWrite (FL,  HIGH) ;  
  digitalWrite (FR,  HIGH) ;  
  state = 2;  
}  
  
void SmartCar::goLeft(){  
  stop();  
  digitalWrite (FL,  HIGH) ;  
  digitalWrite (BR,  HIGH) ;  
  state = 3;  
}  
  
void SmartCar::goRight(){  
  stop();  
  digitalWrite (FR,  HIGH) ;  
  digitalWrite (BL,  HIGH) ;  
  state = 4;  
}  
void SmartCar::go(const int &d ){  
  if(d == state){  
    return;  
  }  
  switch(d){  
  case 0 :  
    stop();  
    break;  
  case 1 :  
    goForward();  
    break;  
  case 2 :  
    goBackward();  
    break;  
  case 3 :  
    goLeft();  
    break;  
  case 4 :  
    goRight();  
    break;  
  default :  
    stop();  
  }  
}
