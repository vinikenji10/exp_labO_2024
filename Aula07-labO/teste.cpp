#include <iostream>
#include "Hotel.h"
#include "Quarto.h"
#include "QuartoDeLuxo.h"
#include "Reserva.h"

void teste1() {
    QuartoDeLuxo *ql1 = new QuartoDeLuxo(18, true, false);
    QuartoDeLuxo *ql2 = new QuartoDeLuxo(19, true, true);
    QuartoDeLuxo *ql3 = new QuartoDeLuxo(20, false, false);

    ql1->imprimir();
    ql2->imprimir();
    ql3->imprimir();
}

void teste2() {
    int quantidade;

    Hotel *h = new Hotel(2, 2);
    h->getQuartosDeLuxo(quantidade);
    cout << quantidade << endl;

    Quarto *q = new Quarto(20, 2, 4);
    h->adicionarQuarto(q);
    h->getQuartosDeLuxo(quantidade);
    cout << quantidade << endl;

    QuartoDeLuxo *ql = new QuartoDeLuxo(21, true, true);
    h->adicionarQuarto(ql);
    h->getQuartosDeLuxo(quantidade);
    cout << quantidade << endl;

    delete h;
}