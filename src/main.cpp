#ifndef UNIT_TEST

#include <iostream>
#include <vector>
#include "envio.h"
#include "servicioPostal.h"
#include "fedEx.h"

using namespace std;

int main() {

    servicioPostal *envioPostal = new servicioPostal(1,15,1);
    fedEx *envioFedEx = new fedEx(4,250);

    std::vector<envio *> arregloEnvios;
    arregloEnvios.push_back(envioPostal);
    arregloEnvios.push_back(envioFedEx);

    double totalMontoEnvios = 0;

    for (envio* Envio : arregloEnvios){

        totalMontoEnvios += Envio->calculoEnvio();
    }

    std::cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;

    return 0;
}

#endif