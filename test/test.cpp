#include <gtest/gtest.h>

#include "../src/ServicioPostal.h"

namespace {
    TEST(ServicioPostalTest, CostoEnvio_Test) {
        ServicioPostal envio {3,15,1};
        float costo = envio.calculoEnvio();

        EXPECT_FLOAT_EQ(2.925, costo);
    }
}