/*
1. Hacer un algoritmo que lea dos variables numéricas a y b e imprima la suma de las variables
si a es mayor que 200
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a = 0, b = 0;

    cout << "Programa para la impresion de la suma de dos variables si es mayor a 200." << endl;

    cout << "Ingrese el valor de la variable a: "; cin >> a;
    cout << "Ingrese el valor de la variable b: "; cin >> b;

    if((a + b) > 200){

        cout << "La suma de a y b es mayor a 200, y su resultado es: " << (a + b);
    } else {

        cout << "La suma de a y b no es mayor a 200.";
    }

    return 0;
}
