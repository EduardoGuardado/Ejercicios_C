#include <iostream>

using namespace std;

// Funciones para realizar las operaciones matemáticas

// SUMA
int Suma(int n1, int n2) {
    return n1 + n2;
}

// RESTA
int Resta(int n1, int n2) {
    return n1 - n2;
}

// MULTIPLICACIÓN
int Multiplicacion(int n1, int n2) {
    return n1 * n2;
}

// DIVISIÓN
int Division(int n1, int n2) {
    // Evaluamos que el usuario no divida entre cero para evitar errores
    if (n2 != 0)
        return n1 / n2;
    else {
        cout << "Error: No se puede dividir entre cero." << endl;
        return 0;
    }
}

int main() {
    // Nuestras variables de trabajo para las operaciones
    int num1, num2, opc, res;

    // Limpiamos la pantalla para mantener estático el menú
    system("cls");

    do {
        // Menú de opciones
        cout << "=== CALCULADORA ===" << endl;
        cout << "=== 1. Suma" << endl;
        cout << "=== 2. Resta" << endl;
        cout << "=== 3. Multiplicacion" << endl;
        cout << "=== 4. Division" << endl;
        cout << "=== 5. Salir" << endl;
        cout << "===================" << endl;
        cout << "Elija una opcion: ";
        cin >> opc;

        // Al elejir una opción se realizará dicha operación
        switch(opc) {
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                res = Suma(num1, num2);
                cout << "La suma es: " << res << endl;
                break;
            case 2:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                res = Resta(num1, num2);
                cout << "La resta es: " << res << endl;
                break;
            case 3:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                res = Multiplicacion(num1, num2);
                cout << "La multiplicacion es: " << res << endl;
                break;
            case 4:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                res = Division(num1, num2);
                cout << "La division es: " << res << endl;
                break;
            case 5:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, elija una opcion del 1 al 5." << endl;
        }

        /*
            Realizamos una pausa para que el usuario pueda ver la respuesta antes de volver
            al menú principal
        */
       cout << "Presione Enter para continuar...";
       cin.ignore(); // Limpiamos el buffer del teclado
       cin.get(); // Esperamos a que el usuario presione la tecla ENTER.

    } while(opc != 5);

    return 0;
}
