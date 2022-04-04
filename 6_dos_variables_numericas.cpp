/*
6. Leer dos variables numéricas, a y b y hacer:

    Si el contenido de a es positivo y el contenido de b también es positivo, hallar e imprimir el cuadrado de a + b.
    Si el contenido de a es positivo y el contenido de b es negativo o neutro, hallar, hallar e imprimir el cubo de a.
    Si el contenido de a es negativo o neutro, hallar e imprimir el cubo de a + b
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a = 0, b = 0;

    cout << "Programa para calcular resultados en base a valores de las variables." << endl;
    cout << "Ingrese la variable a: "; cin >> a;
    cout << "Ingrese la variable b: "; cin >> b;



    if(a > 0 && b > 0){

        cout << "El cuadrado de a + b es: " << pow((a+b), 2);

    } else if(a > 0 && b <= 0){

        cout << "El cubo de a es: " << pow(a, 3);

    } else if(a < 0){

        cout << "El cubo de a + b es: " << pow((a+b), 3);

    }

    return 0;
}
