#include <PiscaLed.h>
#include <stdio.h>
#include <stdbool.h>

int _pino;
long _time;
long _time2;
int _pino2;
bool x;
int cont;

PiscaLed::PiscaLed(int pino, long time){
    pinMode(pino, OUTPUT);
    _pino = pino;
    _time = time;   

}

void PiscaLed::acende_led(){

    digitalWrite(_pino, HIGH);
    delay(_time);
    digitalWrite(_pino, LOW);
    delay(_time);
}
 