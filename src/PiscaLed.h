#ifndef _PISCALED_H
#define _PISCALED_H

#include <Arduino.h>

class PiscaLed{

    private:


    public:

        PiscaLed(int pino, long time, long time2);
        void acende_led();
        void acende_led2();


};




#endif