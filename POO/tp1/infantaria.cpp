#include "infantaria.h"
#include <iostream>
#include <cstdlib>
#include "unidade.h"


Infantaria::Infantaria() {
    poderAtaque = rand() % (60 - 30 + 1) + 30; // 30 a 60
    forca       = rand() % (50 - 20 + 1) + 20; // 20 a 50
    velocidade  = rand() % (40 - 10 + 1) + 10; // 10 a 40
}

int Infantaria::getPoderAtaque() {
    return ((poderAtaque *5) + (forca *3) + (velocidade *2))/10;
}

