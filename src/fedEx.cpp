#include "fedEx.h"

fedEx::fedEx(int peso, int distancia) {
    
    this->peso = peso;
    this->distancia = distancia;
}

float fedEx::calculoEnvio(){

    float costoEnvio = 20;

    if(this->distancia > 500){ 

        costoEnvio = costoEnvio + 5.00;
    }
    if(this->peso > 4){

        costoEnvio = costoEnvio + 3.00;
    }

    return costoEnvio;
}