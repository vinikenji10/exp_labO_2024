/*
 * Faca os includes e coloque a implementacao dos metodos aqui!
 */
#include "Reserva.h"
#include "Hotel.h"
#include <iostream>
#include <algorithm>

using namespace std;

bool Hotel::adicionar(Reserva* reserva) {
    if (quantidade == 0) {
        reservas[0] = reserva;
        quantidade = quantidade + 1;
        return true;
    } else {
        for (int i = 0; i < quantidade; i++) {
            if (reserva == reservas[i] || quantidade == MAXIMO_DE_RESERVAS) {
                return false;
            }
        }
        reservas[quantidade] = reserva;
        quantidade = quantidade + 1;
        return true;
    }
};

bool Hotel::estaDisponivel(int quarto, int inicio, int fim) {
    int n = 0;
    int q[quantidade] = {0};
    for (int i = 0; i < quantidade; i++) {
        if (reservas[i]->getQuarto() == quarto) {
            n = n + 1;
            q[i] = 1;
        }
    }

    if (n == 0) {
        return true;
    } else {
        int inicios[n];
        int fins[n];
        int c = 0;

        for (int i = 0; i < quantidade; i++) {
            if (q[i] == 1) {
                inicios[c] = reservas[i]->getInicio();
                fins[c] = reservas[i]->getFim();
                c = c + 1;
            }
        }

        std::sort(inicios, inicios + n);
        std::sort(fins, fins + n);
/* 
        cout<<"Inicios: ";
        for (int i = 0; i < n; i++) {
            cout<<" "<<inicios[i];
        }

        cout<<"Fins: ";
        for (int i = 0; i < n; i++) {
            cout<<" "<<fins[i];
        } */

        if (inicio < fim && fim <= inicios[0]) {
            return true;
        }

        for (int i = 0; i < n ; i++){
            if(inicio >= fins[i]){
                if (fim <= inicios[i+1] || i == n - 1){
                    return true;
                }
            }
        }
    }
    return false;
};

Reserva* Hotel::getReserva(int i) {
    return reservas[i];
};

void Hotel::imprimir() {
    cout << "Hotel com " << quantidade << " reservas" << endl;
    for (int i = 0; i < quantidade; i++) {
        reservas[i]->imprimir();
    }
};

