#include "PersistenciaDeQuarto.h"
#include <iostream>
using namespace std;
#include <fstream>

// Implemente
PersistenciaDeQuarto::PersistenciaDeQuarto(string arquivo) {
    this->arquivo = arquivo;
}

PersistenciaDeQuarto::~PersistenciaDeQuarto() {
}

// Implemente
void PersistenciaDeQuarto::inserir(Quarto *q) {
    ofstream output;
    output.open(this->arquivo, ios_base::app);
    int numero = q->getNumero();
    int quantidade_cama = q->getNumeroDeCamas();

    output << numero << endl;
    output << quantidade_cama << endl;

    output.close();
}

// Implemente
Quarto **PersistenciaDeQuarto::obter(int &quantidade) {
    return nullptr;
}
