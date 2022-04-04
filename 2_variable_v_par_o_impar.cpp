/*
2. Analizar si el contenido de la variable v es par o impar.
Si v mod 2=0;
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int v = 0;

    cout << "Programa que analiza un variable y determina si es par o impar" << endl;

    cout << "Ingrese el valor de la variable 'v': "; cin >> v;

    if(v % 2 == 0){

        cout << "La variable es par";

    } else {

        cout << "La variable es impar";

    }

    return 0;
}
