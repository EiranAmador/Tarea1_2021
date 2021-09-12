#ifndef UNIT_TEST

#include "servicioPostal.h"
#include "fedEx.h"
#include "envio.h"

using namespace std;

int main() {

    servicioPostal *sp = new servicioPostal(3,15,1);
    float a = sp->calculoEnvio();
    return 0;
}

#endif