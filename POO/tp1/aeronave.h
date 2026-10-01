#ifndef AERONAVE_H
#define AERONAVE_H
#include "unidade.h"

class Aeronave : public Unidade {
private:
    int manobrabilidade;
    int alcance;
public:
    Aeronave();

    int getPoderAtaque() override;
    
};

#endif 