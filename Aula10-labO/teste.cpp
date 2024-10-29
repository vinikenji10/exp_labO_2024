#include "Quarto.h"
#include "PersistenciaDeQuarto.h"
#include <iostream>
using namespace std;
#include <fstream>


void teste1() {
  Quarto *q1 = new Quarto(1,4);
  Quarto *q2 = new Quarto(2,2);
  Quarto *q3 = new Quarto(3,1);

  PersistenciaDeQuarto *p = new PersistenciaDeQuarto("teste1.txt");
  p->inserir(q1);
  p->inserir(q2);
  p->inserir(q3);

  delete q1;
  delete q2;
  delete q3;
}

void teste2() {
  // implemente
}