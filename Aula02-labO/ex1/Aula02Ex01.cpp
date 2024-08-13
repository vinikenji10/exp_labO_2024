/*Faca os includes necessarios*/
#include <iostream>
#include <string>
using namespace std;

string* procurarPessoa(string nomes[], int inicios[], int fins[], int quantidade, int inicio, int fim) {

    string* pessoa;
    pessoa = nullptr;

    for (int i = 0; i < quantidade; i++) {
        if(inicios[i] == inicio && fins[i] == fim) {
            pessoa = &nomes[i];
            break;
        }
    }
    return pessoa;
}

/*Comente a main para enviar*/

int main(){
    string nomes[] = {"Gabriel", "Daniel", "Carlos"};
    int inicios[] = {1, 12, 20};
    int fins[] = {5, 17, 25};
    int quantidade = 3;
    int inicio = 20;
    int fim = 5;

    cout << procurarPessoa(nomes, inicios, fins, quantidade, inicio, fim) << endl;

    if (procurarPessoa(nomes, inicios, fins, quantidade, inicio, fim) != nullptr) {
        cout << *procurarPessoa(nomes, inicios, fins, quantidade, inicio, fim) << endl;
    }

    return 0;
}
