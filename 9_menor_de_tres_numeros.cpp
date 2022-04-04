/*
9. Hallar e imprimir el menor de tres números.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a = 0, b = 0, c = 0, menor = 0;
    cout << "Programa para hallar el menor de tres numeros." << endl;

    cout << "Ingrese el valor a: "; cin >> a;
    cout << "Ingrese el valor b: "; cin >> b;
    cout << "Ingrese el valor c: "; cin >> c;


    /*======Comparando los valores y obteniendo el menor======*/
    a <= b     ? menor = a : menor = b; //Si a y b son iguales, asignamos la primera variable como la menor.
    c <= menor ? menor = c : menor;     //Si c es menor o igual, reemplazamos la variable, si no lo es, salimos de la condicional.

    cout << "\nEl menor de los numeros: " << a << ", " << b << ", " << c << " es: " << menor;
    return 0;
}
