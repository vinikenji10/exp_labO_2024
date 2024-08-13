/*Faca os includes necessarios*/
#include <string>
#include <iostream>
using namespace std;

int calcularServicosIguais(string servicosQuarto1[], int quantidade1, string servicosQuarto2[], int quantidade2) {
    int c = 0;
    for (int i = 0; i < quantidade1; i++){
        for (int j = 0; j < quantidade2; j++){
            if (servicosQuarto1[i] == servicosQuarto2[j]) {
                c = c + 1;
            }
        }
    }
    return c;
}

/*Comente a main para enviar*/
/*
int main(){
    string servicosQuarto1[] = {"massagem", "cafe da manha", "vinho", "pizza"};
    int quantidade1 = 4;
    string servicosQuarto2[] = {"agua", "cafe da manha", "pizza"}; 
    int quantidade2 = 3;
    cout << calcularServicosIguais(servicosQuarto1, quantidade1, servicosQuarto2, quantidade2) << endl;
    return 0;
}
*/