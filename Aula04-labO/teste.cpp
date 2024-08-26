#include <iostream>
#include <string>
#include "Reserva.h"
#include "Hotel.h"

using namespace std;

/**
 * Implementar as funcoes teste
 **/
void teste1() {
    Reserva *r1 = new Reserva;

    r1->setQuarto(31);
    r1->setInicio(1);
    r1->setFim(6);

    r1->imprimir();
}

void teste2() {
    Reserva *r1 = new Reserva;
    Reserva *r2 = new Reserva;

    r1->setQuarto(22);
    r1->setInicio(1);
    r1->setFim(8);

    r2->setQuarto(25);
    r2->setInicio(5);
    r2->setFim(9);

    Hotel *h1 = new Hotel;
    h1->adicionar(r1);
    h1->adicionar(r2);

    h1->imprimir();
}

