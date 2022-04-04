/*
4. Hacer un algoritmo que lea la variable numérica nro e imprima un mensaje indicando si su
contenido es negativo, positivo o neutro.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;


string cubo_de_variable(int b, int c){
    return b > 0 ? "b elevado al cubo es: " + std::to_string(pow(b, 3)) : "c elevado al cubo es: " + std::to_string(pow(c, 3));
}


int main(){

    int b = 0, c = 0;

    cout << "Programa para calcular cubo de variables en base a sus valores." << endl;

    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de c: "; cin >> c;

    cout << "El resultado de " << cubo_de_variable(b, c);


    return 0;
}
