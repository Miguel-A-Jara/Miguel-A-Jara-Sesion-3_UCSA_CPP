/*
10. Hallar e imprimir el menor de tres números.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float valor = 0;

    cout << "Programa para imprimir un numero y su valor absoluto." << endl;

    cout << "Ingrese un valor numerico: "; cin >> valor;
    cout << "El valor original es: " << valor << " y su valor absoluto es: " << abs(valor);

    return 0;
}

