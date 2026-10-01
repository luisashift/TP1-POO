#ifndef VEICULO_H
#define VEICULO_H
#include "unidade.h"


class Veiculo : public Unidade{
private:
    int blindagem;
    int potenciaDeFogo;
public:

    Veiculo();

    int getPoderAtaque() override;
};

#endif 