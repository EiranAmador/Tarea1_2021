#ifndef SERVICIOPOSTAL_H
#define SERVICIOPOSTAL_H

#include "envio.h"

class ServicioPostal : public Envio {

    int peso;
    int distancia;
    int clase;

    public:
        ServicioPostal(int, int, int);
        virtual float calculoEnvio();
};

#endif