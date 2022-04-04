/*
3. Hacer un algoritmo que lea la variable numérica nro e imprima un mensaje indicando si su
contenido es negativo, positivo o neutro.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int nro = 0;

    cout << "Programa que lee una variable y determina si es positiva, negativa o neutra" << endl;
    cout << "Ingrese un numero: "; cin >> nro;

    if(nro > 0){

        cout << "La variable " << nro << " es positiva.";

    } else if(nro < 0){

        cout << "La variable " << nro << " es negativa.";

    } else {

        cout << "La variable " << nro << " es neutra.";
    }

    return 0;
}
