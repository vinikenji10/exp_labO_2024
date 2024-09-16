#include <iostream>
#include "Quarto.h"
#include "Reserva.h"
#include "Hotel.h"

void teste1() {
    Quarto *q = new Quarto(23, 3, 2);
    q->imprimir();

    Reserva *r = new Reserva(q, 2 ,8);
    r->imprimir();

    r->~Reserva();
    delete q;
}

void teste2() {
    Hotel *h = new Hotel(10, 20);
    Quarto *q25 = new Quarto(25, 4, 2);
    Quarto *q32 = new Quarto(32, 2, 1);
    h->adicionar(q25);
    h->adicionar(q32);

    Reserva *r1 = new Reserva(q25, 2, 30);
    h->fazer(r1);

    Reserva *r2 = new Reserva(q32, 10, 12);
    h->fazer(r2);

    Reserva *r3 = new Reserva(q32, 8, 9);
    h->fazer(r3);

    h->cancelar(r2);
    h->imprimir();

    h->~Hotel();
}