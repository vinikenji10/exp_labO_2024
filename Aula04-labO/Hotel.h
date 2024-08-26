#include "Reserva.h"
#define MAXIMO_DE_RESERVAS 10
#ifndef HOTEL_H
#define HOTEL_H

class Hotel {
private:
    Reserva* reservas[MAXIMO_DE_RESERVAS] = {nullptr};
    int quantidade = 0;

public:
    bool adicionar(Reserva* reserva);
    bool estaDisponivel(int quarto, int inicio, int fim);
    Reserva* getReserva(int i);
    void imprimir();
}; 

#endif