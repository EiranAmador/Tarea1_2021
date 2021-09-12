#ifndef UNIT_TEST

#include <iostream>
#include <vector>
#include "envio.h"
#include "servicioPostal.h"
#include "fedEx.h"

using namespace std;

int main() {

    servicioPostal *envio1 = new servicioPostal(1,15,1);
    servicioPostal *envio2 = new servicioPostal(8,18,2);
    fedEx *envio3 = new fedEx(4,250);
    servicioPostal *envio4 = new servicioPostal(9,3,3);
    fedEx *envio5 = new fedEx(3,501);
    fedEx *envio6 = new fedEx(5,700);

    std::vector<envio *> arregloEnvios;
    arregloEnvios.push_back(envio1);
    arregloEnvios.push_back(envio2);
    arregloEnvios.push_back(envio3);
    arregloEnvios.push_back(envio4);
    arregloEnvios.push_back(envio5);
    arregloEnvios.push_back(envio6);

    double totalMontoEnvios = 0;

    for (envio* Envio : arregloEnvios){

        totalMontoEnvios += Envio->calculoEnvio();
    }

    std::cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;

    return 0;
}

#endif