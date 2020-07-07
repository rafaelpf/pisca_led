#include <PiscaLed.h>
#include <stdio.h>
#include <stdbool.h>

int _pino;
long _time;
long _time2;
int _pino2;
bool x;
int cont;
PiscaLed::PiscaLed(int pino, long time, long time2){
    pinMode(pino, OUTPUT);
    _pino = pino;
    _time = time;
    _time2 = time2;
    

}

void PiscaLed::acende_led(){

    digitalWrite(_pino, HIGH);
    delay(_time);
    digitalWrite(_pino, LOW);
    delay(_time);

}

void PiscaLed::acende_led2()
{
    digitalWrite(_pino, HIGH);
    delay(_time2);
    digitalWrite(_pino, LOW);
    delay(_time2);
    
   } 