#include <iostream>
#include <string>

using namespace std;

class Reserva
{
public:
    int quarto;
    int inicio = 0;
    int fim = 0;

    void setQuarto(int numeroDoQuarto);
    void setInicio(int inicio);
    void setFim(int fim);
    
    int getInicio();
    int getFim();
    int getQuarto();
    double getPreco();
    
    void imprimir();
};


double Reserva::getPreco()
{
    return 100*(fim - inicio);
}

void Reserva::imprimir()
{
    cout << "Reserva ("<< inicio << "-" << fim << "): Quarto " << quarto << " - " << getPreco()<< " reais" << endl;
}

/**
 * Implementar as funcoes teste
 **/
void teste1() {
    // IMPLEMENTE seguindo o enunciado
}

void teste2() {
    // IMPLEMENTE seguindo o enunciado
}

