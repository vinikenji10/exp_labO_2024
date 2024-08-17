#include <iostream>

// Faca os includes necessarios

using namespace std;

class Quarto {
public:
    int numeroDoQuarto = 0;
    int numeroDePessoas = 0;
    int numeroDeCamas = 0;
    double getPrecoDiaria();
    void imprimir();
};

double Quarto::getPrecoDiaria() {
    if (numeroDePessoas == 2) {
        return 150;
    } else {
        return numeroDePessoas*100;
    }
}

void Quarto::imprimir() {
    cout << "Quarto " << numeroDoQuarto << ": " << numeroDePessoas << " pessoas, " << numeroDeCamas << " camas - Diaria custa " << getPrecoDiaria() << endl;
}

// Implementar os metodos da classe Quarto

class Reserva {
public:
    Quarto *quarto1 = nullptr;
    Quarto *quarto2 = nullptr;
    int inicio = 0;
    int fim = 0;
    bool adicionarQuarto(Quarto *q);
    double calcularPreco();
    void imprimir();
};


// Implementar os metodos da classe Reserva

void teste1() {
    Quarto *q1 = new Quarto;
    Quarto *q2 = new Quarto;

    q1->numeroDoQuarto = 31;
    q1->numeroDePessoas = 3;
    q1->numeroDeCamas = 2;

    q2->numeroDoQuarto = 32;
    q2->numeroDePessoas = 2;
    q2->numeroDeCamas = 1;

    q1->imprimir();
    q2->imprimir();
}

void teste2() {
    // Implemente a funcao teste do exercicio 02 segundo o enunciado
}

int main() {
    teste1();
    return 0;
}
