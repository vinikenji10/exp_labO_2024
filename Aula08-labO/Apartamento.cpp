// Faça os includes necessários
#include "Apartamento.h"
#include <iostream>
using namespace std;

Apartamento::Apartamento(int numero, double area) : Acomodacao(numero) {
  this->area = area;
}

Apartamento::~Apartamento() {

}

double Apartamento::getArea() {
  return area;
}

double Apartamento::precoBase = 0;

double Apartamento::getPrecoBase() {
  return Apartamento::precoBase;
}

void Apartamento::setPrecoBase(double base) {
  Apartamento::precoBase = base;
}

double Apartamento::getPrecoDiaria() {
  return getPrecoBase() + area*1.5;
}

void Apartamento::imprimir() {
  cout << "Apartamento " << getNumero() << ": " << getArea() << " metros quadrados - diaria custa " << getPrecoDiaria() << " reais" << endl;
}
