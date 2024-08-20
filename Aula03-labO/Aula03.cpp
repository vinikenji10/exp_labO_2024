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
    }
    
    return numeroDePessoas*100;
    
};

void Quarto::imprimir() {
    cout << "Quarto " << numeroDoQuarto << ": " << numeroDePessoas << " pessoas, " << numeroDeCamas << " camas - Diaria custa " << getPrecoDiaria() << endl;
};

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

bool Reserva::adicionarQuarto(Quarto *q) {
    if (quarto1 == nullptr) {
        quarto1 = q;
        return true;
    }

    if (quarto2 == nullptr && quarto1->numeroDoQuarto != q->numeroDoQuarto) {
        quarto2 = q;
        return true;
    }

    return false;
};

double Reserva::calcularPreco() {
    double p1 = 0;
    double p2 = 0;

    if (quarto1 == nullptr && quarto2 == nullptr) {
        return 0;
    } else {

    if (quarto1 != nullptr) {
        p1 = quarto1->getPrecoDiaria();
    }

    if (quarto2 != nullptr) {
        p2 = quarto2->getPrecoDiaria();
    }

    return (p1+p2)*(fim-inicio);
    }
};

void Reserva::imprimir() {
    cout << "Reserva:" << endl;
    if (quarto1 != nullptr) {
        quarto1->imprimir();
    }
    if (quarto2 != nullptr) {
        quarto2->imprimir();
    }
    cout << "Preco total: " << calcularPreco() << endl;
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
};

void teste2() {
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

    Reserva *r = new Reserva;
    r->inicio = 2;
    r->fim = 13;
    r->adicionarQuarto(q1);
    r->adicionarQuarto(q2);
    r->imprimir();
};

/* int main() {
    teste2();
    return 0;
}; */
