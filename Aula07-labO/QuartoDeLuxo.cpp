// Faça os includes necessários
#include "QuartoDeLuxo.h"
#include "Quarto.h"
#include <iostream>

using namespace std;

QuartoDeLuxo::QuartoDeLuxo(int numeroDoQuarto, bool kingSize, bool sacada) : Quarto(numeroDoQuarto, 2, 1) {
  this->numeroDoQuarto = numeroDoQuarto;
  this->kingSize = kingSize;
  this->sacada = sacada;
}

QuartoDeLuxo::~QuartoDeLuxo() {

}

double QuartoDeLuxo::getPrecoDiaria() {
  int preco = 300;
  if(kingSize) {
    preco = preco + 75;
  }
  if(sacada) {
    preco = preco + 150;
  }

  return preco;
}

double QuartoDeLuxo::getPrecoDiaria(double desconto) {
  int preco = 300;
  if(kingSize) {
    preco = preco + 75;
  }
  if(sacada) {
    preco = preco + 150;
  }
  preco = preco*(1-desconto);

  return preco;
}

void QuartoDeLuxo::imprimir() {
  cout << "Quarto de Luxo " << numeroDoQuarto << ": Diaria custa " << getPrecoDiaria() << " reais" << endl;
}