
#include "ServicioPostal.h"

ServicioPostal::ServicioPostal(int peso, int distancia, int clase) {
    
    this->peso = peso;
    this->distancia = distancia;
    this->clase = clase;
}

float ServicioPostal::calculoEnvio(){

    float tablaCostos[3][3] = {{0.195,0.0195,0.0150},{0.450,0.0450,0.0160},{0.500,0.0500,0.0170}};

    float costoEnvio = 0;

    if(this->peso >= 1 && this->peso <= 3){//Peso 1-3

        if(this->clase == 1){costoEnvio = tablaCostos[0][0]*this->distancia;}
        if(this->clase == 2){costoEnvio = tablaCostos[0][1]*this->distancia;}
        if(this->clase == 3){costoEnvio = tablaCostos[0][2]*this->distancia;}
    };
    if(this->peso >= 4 && this->peso <= 8){//Peso 4-8

        if(this->clase == 1){costoEnvio = tablaCostos[1][0]*this->distancia;}
        if(this->clase == 2){costoEnvio = tablaCostos[1][1]*this->distancia;}
        if(this->clase == 3){costoEnvio = tablaCostos[1][2]*this->distancia;}
    };
    if(this->peso >= 9){//Peso 9+

        if(this->clase == 1){costoEnvio = tablaCostos[2][0]*this->distancia;}
        if(this->clase == 2){costoEnvio = tablaCostos[2][1]*this->distancia;}
        if(this->clase == 3){costoEnvio = tablaCostos[2][2]*this->distancia;}
    };
    
    return costoEnvio;
}