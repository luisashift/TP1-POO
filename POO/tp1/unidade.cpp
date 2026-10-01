#include "unidade.h"

Unidade::Unidade() {
    destruicoes = 0;
    poderAtaque = 0;
}

Unidade::~Unidade() {}

int Unidade::getDestruicoes(){
    return destruicoes;
}

void Unidade ::somaDestruicao() {
    destruicoes++;
}