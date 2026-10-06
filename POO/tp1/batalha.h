#ifndef BATALHA_H
#define BATALHA_H
#include "date.h"
#include "exercito.h"

class Batalha {
private:
  Date data;
  Exercito *exercitoA;
  Exercito *exercitoB;
  int resultadoA;
  int resultadoB;

public:
  Batalha();

  ~Batalha();

  void ataqueExercitoA();

  void ataqueExercitoB();

  std ::string getResultados();
};

#endif