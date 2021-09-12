#include <gtest/gtest.h>

#include "../src/servicioPostal.h"

namespace {
    
    TEST(ServicioPostalTest, Costo_Peso1_Clase1_Test) {
        
        servicioPostal envio {3,15,1};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(2.925, costo);
    }
    TEST(ServicioPostalTest, Costo_Peso1_Clase2_Test) {
        
        servicioPostal envio {3,15,2};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(0.2925, costo);
    }
    TEST(ServicioPostalTest, Costo_Peso1_Clase3_Test) {
        
        servicioPostal envio {3,15,3};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(0.225, costo);
    }

    TEST(ServicioPostalTest, Costo_Peso2_Clase1_Test) {
        
        servicioPostal envio {8,15,1};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(6.75, costo);
    }
    TEST(ServicioPostalTest, Costo_Peso2_Clase2_Test) {
        
        servicioPostal envio {8,15,2};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(0.675, costo);
    }
    TEST(ServicioPostalTest, Costo_Peso2_Clase3_Test) {
        
        servicioPostal envio {8,15,3};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(0.24, costo);
    }

    TEST(ServicioPostalTest, Costo_Peso3_Clase1_Test) {
        
        servicioPostal envio {9,15,1};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(7.5, costo);
    }
    TEST(ServicioPostalTest, Costo_Peso3_Clase2_Test) {
        
        servicioPostal envio {9,15,2};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(0.75, costo);
    }
    TEST(ServicioPostalTest, Costo_Peso3_Clase3_Test) {
        
        servicioPostal envio {9,15,3};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(0.255, costo);
    }
}