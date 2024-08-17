/*Faca os includes necessarios*/
#include <iostream>
#include <vector>
using namespace std;

bool obterPrimeiraDisponibilidade(int inicios[], int fins[], int quantidade, 
int duracao, int dataMaxima, int* inicio, int& fim) {
  if (quantidade == 0) {
    *inicio = 1;
    fim = 1 + duracao;
    return true;

  } else {
    *inicio = 0;
    fim = 0;
    int temp = 1;
    for (int i = 0; i < quantidade; i++) {
      if ((temp + duracao) <= inicios[i] && (temp + duracao) <= dataMaxima) {
        *inicio = temp;
        fim = temp + duracao;
        return true;

      } else {
        temp = fins[i];
      }
    }
  }
  return false;
}


/*Comente a main para enviar*/

int main() {
  int inicios1[] = {1, 10, 13};
  int fins1[] = {3, 13, 15};
  int quantidade1 = 3;
  int duracao1 = 3;
  int dataMaxima1 = 20;
  int inicio1;
  int fim1;

  bool encontrou1 = obterPrimeiraDisponibilidade(inicios1, fins1, quantidade1, duracao1, dataMaxima1, &inicio1, fim1);

  cout << encontrou1 << endl;
  cout << inicio1 << endl;
  cout << fim1 << endl;

  int inicios1[] = {1, 10, 13};
  int fins1[] = {3, 13, 15};
  int quantidade1 = 3;
  int duracao1 = 3;
  int dataMaxima1 = 20;
  int inicio1;
  int fim1;

  bool encontrou1 = obterPrimeiraDisponibilidade(inicios1, fins1, quantidade1, duracao1, dataMaxima1, &inicio1, fim1);

  cout << encontrou1 << endl;
  cout << inicio1 << endl;
  cout << fim1 << endl;
  return 0;
}