#ifndef SERVICIOPOSTAL_H
#define SERVICIOPOSTAL_H

#include "envio.h"

class servicioPostal : public envio {

    int peso;
    int distancia;
    int clase;

    public:
        
        servicioPostal(int, int, int);
        virtual float calculoEnvio();
};

#endif