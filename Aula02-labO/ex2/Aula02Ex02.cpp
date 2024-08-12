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
/*
int main() {
  int inicios[] = {1, 10, 13};
  int fins[] = {3, 13, 15};
  int quantidade = 3;
  int duracao = 3;
  int dataMaxima = 20;
  int inicio;
  int fim;

  bool encontrou = obterPrimeiraDisponibilidade(inicios, fins, quantidade, duracao, dataMaxima, &inicio, fim);

  cout << encontrou << endl;
  cout << inicio << endl;
  cout << fim << endl;

  return 0;
}
*/
