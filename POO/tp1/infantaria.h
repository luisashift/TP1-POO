#ifndef INFANTARIA_H
#define INFANTARIA_H
#include "unidade.h"

class Infantaria : public Unidade {
private:
  int forca;
  int velocidade;

public:
  Infantaria();

  int getPoderAtaque() override;
};

#endif