#include <gtest/gtest.h>

#include "../src/fedEx.h"

namespace {
    
    TEST(FedExTest, Costo_PesoMenor4_DistanciaMenor500_Test) {
        
        fedEx envio {3,499};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(20, costo);
    }
    TEST(FedExTest, Costo_PesoMayor4_DistanciaMayor500_Test) {
        
        fedEx envio {5,501};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(28, costo);
    }
    TEST(FedExTest, Costo_PesoMenor4_DistanciaMayor500_Test) {
        
        fedEx envio {3,501};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(25, costo);
    }
    TEST(FedExTest, Costo_PesoMayor4_DistanciaMenor500_Test) {
        
        fedEx envio {5,499};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(23, costo);
    }
}