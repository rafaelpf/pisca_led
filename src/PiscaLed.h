#ifndef _PISCALED_H
#define _PISCALED_H

#include <Arduino.h>

class PiscaLed{

    private:


    public:

        PiscaLed(int pino, long time);
        void acende_led();
};

#endif