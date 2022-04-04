/*
5. Hacer un algoritmo que lea tres variables, a,b,c y que luego realice lo siguiente:

    Si a + c es mayor a 1000, entonces, imprimir la suma de las tres variables              (a + b + c).
    Si a + c es igual a 1000, entonces, imprimir el producto de las tres variables          (a*b*c).
    Si a + c es menor a 1000, entonces imprimir el cubo de la suma de las tres variables    (a + b + c) ^3
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a = 0, b = 0, c = 0;


    cout << "Programa que lee tres variables y determina resultados en base a sus valores." << endl;

    cout << "Ingrese el valor de la variable a: "; cin >> a;
    cout << "Ingrese el valor de la variable b: "; cin >> b;
    cout << "Ingrese el valor de la variable c: "; cin >> c;

    if(a + c > 1000){

        cout << "La suma de las tres variables es: " << (a + b + c);

    } else if(a + c == 1000){

        cout << "El producto de las tres variables es: " << (a * b * c);

    } else  if(a + c < 1000){

        cout << "El cubo de la suma de las tres variables es: " << pow((a + b + c), 3);

    }

    return 0;
}
