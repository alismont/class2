/******************************************************************
 Created with PROGRAMINO IDE for Arduino - 14.09.2016 22:06:51
 Project     :
 Libraries   :
 Author      :
 Description :
******************************************************************/
//#include "Cuisine.h"

#include <Arduino.h>
    
class Cuisine{
public:   //public otherwise error: test::test private

 int i; // a variable
    int EtatBp;
    int B3;
    int Tps;
    int TpsS;
    
 Cuisine(int _TpsS){ //the constructor
   i=0;
  _TpsS=TpsS; 
 }
 
 int Ton(int _Tps){

    if(_Tps>0)
    {
        _Tps=_Tps-1;
    }
    return _Tps;
}


 int Etat(int _EtatBp,int _B3,int _Tps){
   

switch(_EtatBp) {
    case 0:
        if(_B3 ==1)
        {
        _EtatBp=1;
        }
        break;
    case 1:
        if(_B3 ==1)
        {
            if(_Tps<=50)
            {
                _EtatBp=0;
            }
            else
            {
            _EtatBp=2;
            }
        }
        break;
    case 2:
        _EtatBp=3;
        break;
    case 3:
        if(_B3 ==1)
        {
        _EtatBp=0;
        }
        break;
  }
    return _EtatBp;
   
}
}; 
