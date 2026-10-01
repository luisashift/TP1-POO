#ifndef UNIDADE_H
#define UNIDADE_H

class Unidade {
protected:
    int poderAtaque;
    int destruicoes;
public:
    Unidade();

    virtual ~Unidade();

    virtual int getPoderAtaque() = 0; //torna a classe abstrata, pois obriga a implementação do método nas classes filhas

    void somaDestruicao();

    int getDestruicoes();
};

#endif