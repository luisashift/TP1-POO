#include "aeronave.h"
#include <iostream>
#include <cstdlib>

Aeronave::Aeronave() {
    manobrabilidade = rand() % (70 - 30 + 1) + 30;
    alcance = rand() % (50 - 20 + 1) + 20;
    poderAtaque = rand() % (90 - 50 + 1) + 50;
}

int Aeronave ::getPoderAtaque() {
    return ((poderAtaque *5) + (manobrabilidade *3) + (alcance *2))/10;
};