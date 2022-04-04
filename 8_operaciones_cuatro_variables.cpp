/*
8. Leer dos variables numéricas, a y b y hacer:

    Si el contenido de a es positivo y el contenido de b también es positivo, hallar e imprimir el cuadrado de a + b.
    Si el contenido de a es positivo y el contenido de b es negativo o neutro, hallar, hallar e imprimir el cubo de a.
    Si el contenido de a es negativo o neutro, hallar e imprimir el cubo de a + b
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string determinar_valor_variales(int a, int b, int c, int d){

    if((a+b) > 0){

        if((c+d) > 0){

            return "Las cuatro variables son: " + std::to_string(a) + ", " + std::to_string(b) + ", " + std::to_string(c) + ", " + std::to_string(d);

        } else if((c+d) <= 0){

            return "El producto de las variables es: " + std::to_string(a * b * c * d); //Retornamos el producto de las 4 variables

        }
    }

    if((a+b) <= 0){

        if((c+d) > 0){

            return "La suma de las variables es: " + std::to_string(a + b + c + d); //Retornamos la suma de las 4 variables

        } else if((c+d) <= 0){

            return "La suma del cubo de a+b mas el cuadrado de c+d es: " + std::to_string(pow((a+b), 3) + pow((c+d), 2)); //Suma del cubo de (a+b) mas el cuadrado de (c+d)

        }
    }
}

int main(){

    int a = 0, b = 0, c = 0, d = 0;
    cout << "Programa para calcular resultados en base a valores de variables" << endl;

    cout << "\nIngrese el valor de la variable a: "; cin >> a;
    cout << "\nIngrese el valor de la variable b: "; cin >> b;
    cout << "\nIngrese el valor de la variable c: "; cin >> c;
    cout << "\nIngrese el valor de la variable d: "; cin >> d;

    cout << determinar_valor_variales(a, b, c, d);

    return 0;
}
