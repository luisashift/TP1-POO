#include "exercito.h"
#include <iostream>
#include <vector>

Exercito :: Exercito(std :: string nome) {
    nome = nome;
    vitorias = 0;
    derrotas = 0;
    empates = 0;
}

Exercito::~Exercito() {
    for (size_t i = 0; i < unidades.size(); i++) {
        delete unidades[i]; // igual ao free() do C
    }
    unidades.clear();
}

void Exercito :: adicionarUnidade(Unidade* unidade) {
    unidades.push_back(unidade); //o pushback adiciona um elemento no final do vetor
}

std :: string Exercito :: getResultados() {
    return "Vitorias: " + std::to_string(vitorias) + " Derrotas: " + std::to_string(derrotas) + " Empates: " + std::to_string(empates);
    //std::to_string converte um inteiro para string
}

std :: string Exercito :: getNome() {
    return nome;
}

std :: vector<Unidade*> Exercito :: getUnidades() {
    return unidades;
}
void Exercito :: imprimeUnidades() {
    std::cout << "Exercito " << nome << "possui" << unidades.size() << " unidades." << std::endl;
}

void Exercito :: somaVitoria() {
    vitorias++;
}

void Exercito :: somaDerrota() {
    derrotas++;
}

void Exercito :: somaEmpate() {
    empates++;
}
