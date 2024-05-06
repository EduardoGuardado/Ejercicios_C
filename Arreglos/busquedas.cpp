#include <iostream>

using namespace std;

// Constante para definir el tamaño de nuestro arreglo
const int TAMANO = 7;

// El arreglo para realizar la búsqueda
int datos[TAMANO];

void agregarDatos(int n){
    for(int i = 0; i < TAMANO; i++){
        datos[i] = i * n; // Asigna los valores al arreglo
    }
    cout << "Los datos se han ingresado con exito!" << endl;
}

void mostrarDatos(){
    cout << "El arreglo contiene la siguiente lista: ";
    for(int i = 0; i < TAMANO; i++){
        cout << datos[i] << " ";
    }
    cout << endl;
    cout << "Los datos se han mostrado con exito!";
}

int main() {
    // Variables de trabajo
    int opc, num = 0;

    // Limpiamos la pantalla para mantener estático el menú
    system("cls");

    do {
        // Menú de opciones
        cout << "=== OPERACIONES CON ARREGLOS ===" << endl;
        cout << "=== 1. Añadir datos ordenados" << endl;
        cout << "=== 2. Ver datos del arreglo" << endl;
        cout << "=== 3. Salir" << endl;
        cout << "================================" << endl;
        cout << "Elija una opcion: ";
        cin >> opc;

        // Al elejir una opción se realizará dicha operación
        switch(opc) {
            case 1:
                cout << "Ingrese la sucesion de datos a ingresar (conteo de 1, 2 o 3, etc...): ";
                cin >> num;
                agregarDatos(num);
                break;
            case 2:
                mostrarDatos();
                break;
            case 3:
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

    } while(opc != 3);

    return 0;
}
