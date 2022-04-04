/*
6. Leer dos variables numéricas, a y b y hacer:

    Si el contenido de a es positivo y el contenido de b también es positivo, hallar e imprimir el cuadrado de a + b.
    Si el contenido de a es positivo y el contenido de b es negativo o neutro, hallar, hallar e imprimir el cubo de a.
    Si el contenido de a es negativo o neutro, hallar e imprimir el cubo de a + b
*/
#include <iostream>
#include <cmath>
using namespace std;


string son_lados_triangulo(int lad1, int lad2, int lad3){

    if(lad1 > (lad2 + lad3)){
        return "El lado 1 no forma parte de un triangulo";
    }

    if(lad2 > (lad1 + lad3)){
        return "El lado 2 no forma parte de un triangulo";
    }

    if(lad3 > (lad2 + lad1)){
        return "El lado 3 no forma parte de un triangulo";
    }

    return "Todos los lados forman parte de un triangulo.";
}


int main(){

    int lad1 = 0, lad2 = 0, lad3 = 0;

    cout << "Programa para determinar si tres valores son los lados de un triangulo" << endl;

    cout << "Ingrese el lado numero 1: "; cin >> lad1;
    cout << "Ingrese el lado numero 2: "; cin >> lad2;
    cout << "Ingrese el lado numero 3: "; cin >> lad3;

    cout << son_lados_triangulo(lad1, lad2, lad3);

    return 0;
}
