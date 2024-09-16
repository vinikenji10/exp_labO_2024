#include "Reserva.h"

#include <iostream>

using namespace std;

Reserva::Reserva(Quarto* quarto, int inicio, int fim):
quarto(quarto), inicio(inicio), fim(fim){}

Reserva::~Reserva() {
    cout << "Reserva para o quarto " << quarto->getNumeroDoQuarto() << " destruida";
}

Quarto *Reserva::getQuarto()
{
    return quarto;
}

int Reserva::getInicio()
{
    return inicio;
}

int Reserva::getFim()
{
    return fim;
}

double Reserva::calcularPreco()
{
    int diarias = fim - inicio;
    return (quarto->getPrecoDiaria() * diarias);
}

void Reserva::imprimir()
{
    cout << "Reserva ("<< (fim-inicio) <<" dias):" << endl;
    quarto->imprimir();
    cout << "Preco total: " << calcularPreco() << endl;
}