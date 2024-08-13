/*Faca os includes necessarios*/
#include <iostream>
#include <stdio.h>
using namespace std;

bool estaDisponivel(int inicio, int fim, int reservasInicio[], int reservasFim[], int quantidade) {
    bool ans = false;
    for (int i = 0; i < quantidade ; i++){
        if(inicio >= reservasFim[i]){
            if (fim <= reservasInicio[i+1] || i == quantidade-1){
                ans = true;
            }
        }
    }
    return ans;
}

/*Comente a main para enviar*/
/*
int main() {
    int inicio = 3, fim = 4;
    int reservasInicio[] = {1, 3, 8} ;
    int reservasFim[] = {3, 7, 10 } ;
    int quantidade = 3 ;

    cout << estaDisponivel(inicio, fim, reservasInicio, reservasFim, quantidade) << endl;
    return 0;
}
*/