#include "veiculo.h"
#include <cstdlib>

Veiculo::Veiculo() {
  blindagem = rand() % (70 - 30 + 1) + 30;
  poderAtaque = rand() % (80 - 40 + 1) + 40;
  potenciaDeFogo = rand() % (50 - 20 + 1) + 20;
}

int Veiculo ::getPoderAtaque() {
  return ((poderAtaque * 5) + (blindagem * 4) + (potenciaDeFogo * 1)) / 10;
}