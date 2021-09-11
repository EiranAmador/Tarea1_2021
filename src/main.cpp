
#ifndef UNIT_TEST

#include "ServicioPostal.h"
#include "envio.h"

using namespace std;

int main() {

    ServicioPostal *sp = new ServicioPostal(3,15,1);
    float a = sp->calculoEnvio();
    return 0;
}

#endif