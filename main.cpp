// Práctica 4: Calculadora básica
// Traduce la receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque de código.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué funciones trae ahora utilerias.h? ¿Qué devuelve cada una?
#include "utilerias.h"

using namespace std;

int main() {
    int opcion;
    double a, b, resultado;
    char simbolo;


    cout << "Calculadora basica" << endl;

    // 2. Mostrar el menú
    cout << "1) Suma  2) Resta  3) Multiplicacion  4) Division" << endl;


    do {
        cout << "Elige una opcion (1-4): ";
        cin >> opcion;

        if (opcion < 1 || opcion > 4) {
            cout << "Opcion no valida, elige un numero del 1 al 4" << endl;
        }
    } while (opcion < 1 || opcion > 4);


    cout << "Primer numero: ";
    cin >> a;

    cout << "Segundo numero: ";
    cin >> b;

    
    if (opcion == 4) {
        while (b == 0) {
            cout << "No se puede dividir entre cero" << endl;
            cout << "Segundo numero (distinto de 0): ";
            cin >> b;
        }
    }

    switch (opcion) {
        case 1:
            resultado = a + b;
            simbolo = '+';
            break;
        case 2:
            resultado = a - b;
            simbolo = '-';
            break;
        case 3:
            resultado = a * b;
            simbolo = '*';
            break;
        case 4:
            resultado = a / b;
            simbolo = '/';
            break;
    }

    cout << a << " " << simbolo << " " << b << " = " << resultado << endl;

    return 0;
}