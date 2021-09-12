#ifndef FEDEX_H
#define FEDEX_H

#include "envio.h"

class fedEx : public envio {

    int peso;
    int distancia;

    public:
        
        fedEx(int, int);
        virtual float calculoEnvio();
};

#endif