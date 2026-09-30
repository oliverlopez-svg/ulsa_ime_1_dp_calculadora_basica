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

    // 1. Mostrar título
    cout << "Calculadora basica" << endl;

    // 2. Mostrar el menú
    cout << "1) Suma  2) Resta  3) Multiplicacion  4) Division" << endl;

    // 3. Repetir hasta obtener una opción válida (1-4)
    do {
        cout << "Elige una opcion (1-4): ";
        cin >> opcion;

        if (opcion < 1 || opcion > 4) {
            cout << "Opcion no valida, elige un numero del 1 al 4" << endl;
        }
    } while (opcion < 1 || opcion > 4);

    // 4 y 5. Leer los dos números
    cout << "Primer numero: ";
    cin >> a;

    cout << "Segundo numero: ";
    cin >> b;

    // 6. Validar división entre cero
    if (opcion == 4) {
        while (b == 0) {
            cout << "No se puede dividir entre cero" << endl;
            cout << "Segundo numero (distinto de 0): ";
            cin >> b;
        }
    }

    // 7. Estructura según la opción elegida
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

    // 8. Mostrar resultado
    cout << a << " " << simbolo << " " << b << " = " << resultado << endl;

    return 0;
}