/*Faca os includes necessarios*/
#include <iostream>
using namespace std;

double calcularPreco(double precoDiaria, bool temCafe, int numeroDePessoas) {
    double total;
    total = precoDiaria*numeroDePessoas;

    if (temCafe){
        total = total + numeroDePessoas*20;
    }

    if(numeroDePessoas == 2){
        total = total*3/4;
    }

    return total;
}

/*Comente a main para enviar*/

/*
int main(){
    cout << calcularPreco(100.0, true, 4) << endl;
    cout << calcularPreco(100.0, false, 2) << endl;
    cout << calcularPreco(100.0, true, 2) << endl;
    return 0;
}
*/