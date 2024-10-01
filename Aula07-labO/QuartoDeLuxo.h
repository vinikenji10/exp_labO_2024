#include "Quarto.h"
#ifndef QUARTO_DE_LUXO_H
#define QUARTO_DE_LUXO_H

class QuartoDeLuxo : public Quarto {
  public:
    QuartoDeLuxo(int numeroDoQuarto, bool kingSize, bool sacada);
    ~QuartoDeLuxo();

    double getPrecoDiaria();
    double getPrecoDiaria(double desconto);

    void imprimir();

  private:
    bool kingSize = false;
    bool sacada = false;
};

#endif
