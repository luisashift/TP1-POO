#ifndef EXERCITO_H
#define EXERCITO_H
#include <string>
#include "unidade.h"
#include <vector>


class Exercito {
private:
    std :: string nome;
    std :: vector<Unidade*> unidades;
    int vitorias;
    int derrotas;
    int empates;
public:
    Exercito(std :: string nome);

    ~Exercito();

    void adicionarUnidade(Unidade* unidade);

    std :: string getResultados();

    void imprimeUnidades ();

    std :: string getNome();

    std :: vector<Unidade*> getUnidades();

    void somaVitoria();

    void somaDerrota();

    void somaEmpate();

};


#endif