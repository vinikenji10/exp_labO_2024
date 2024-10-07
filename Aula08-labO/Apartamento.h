#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Acomodacao.h"

// Faça os includes necessários

class Apartamento : public Acomodacao
{
private:
  static double precoBase;

protected:
  double area = 0;

public:
  Apartamento(int numero, double area);
  virtual ~Apartamento();

  // Lembre de implementar os métodos não implementados
  static double getPrecoBase();
  static void setPrecoBase(double base);
  double getArea();
  double getPrecoDiaria();
  void imprimir();
};
#endif