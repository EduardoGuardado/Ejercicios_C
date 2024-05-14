#include <iostream>

using namespace std;

// Variables de trabajo
int opc, num, aux = 0;

// Constante para definir el tamaño de nuestro arreglo
const int TAMANO = 7;

// El arreglo para realizar la búsqueda
int datos[TAMANO];

void agregarDatos(){
    for(int i = 0; i < TAMANO; i++){
        cout << "Ingrese el numero para la posicion " << i << " en el arreglo: ";
        cin >> num;
        datos[i] = num; // Asigna los valores al arreglo
    }
    cout << "Los datos se han ingresado con exito!" << endl;
}

void mostrarDatos(){
    cout << "El arreglo contiene la siguiente lista: ";
    for(int i = 0; i < TAMANO; i++){
        cout << datos[i] << " ";
    }
    cout << endl;
    cout << "Los datos se han mostrado con exito!" << endl;
}

// Algoritmo para realizar la busqueda dentro del arreglo
void buscarNumero(){
    // Le pido el numero al usuario
    cout << "Ingrese el numero a buscar: ";
    cin >> num;
    // Defino el bucle para iterar dentro de cada posicion en el arreglo
    for(int i = 0; i < TAMANO; i++){
        // almaceno el dato existente en una variable auxiliar en cada vuelta de la posición en el arreglo
        aux = datos[i];
        // realizo una condición para identificar si el numero almacenado en la variable auxiliar corresponde a la busqueda
        if(aux == num){
            // si es verdadero muestro el resultado y termino el bucle.
            cout << "Busqueda exitosa, el numero " << num << " se encontro en la posicion " << i << endl;
            break;
        } // de lo contrario deberá volver a realizar otra vuelta para seguir buscando.
    }
    cout << "La busqueda ha terminado con extiro!" << endl;
}

// Ordenamiento burbuja
void ordenarLista(){
    // Variables de trabajo para el ordenamiento
    int temp = 0;
    // Mostramos la lista de numeros desordenada
    cout << "El arreglo contiene la siguiente lista desordenada: ";
    for(int i = 0; i < TAMANO; i++){
        cout << datos[i] << " ";
    }
    cout << "\n" << endl;

    // Creamos el algoritmo que ordenara la lista
    cout << "Ordenando la lista...\n" << endl;
    // Comenzamos recorriendo el arreglo desde la posicion cero
    for(int i = 0; i < TAMANO - 1; i++){
            // Recorremos el arreglo una posicion antes de la primera
            for(int j = 0; j < TAMANO - i - 1; j++){
                // Comprobamos que el arrelgo en la posicion actual sea mayor a la siguiente
                if(datos[j] > datos[j + 1]){
                    // De ser asi almacenamos ese valor en una variable temporal
                    temp = datos[j];
                    // Intercambiamos el valor de la posicion siguiente a la posicion actual
                    datos[j] = datos[j + 1];
                    // Asignamos el valor de la posicion actual a la siguiente posicion
                    datos[j + 1] = temp;
                }
            }
    }

    cout << "La lista se ha ordenado de forma ascendente: ";
    for(int i = 0; i < TAMANO; i++){
        cout << datos[i] << " ";
    }
    cout << endl;
}

int main() {

    do {
        // Limpiamos la pantalla para mantener estático el menú
        system("cls");

        // Menú de opciones
        cout << "=== OPERACIONES CON ARREGLOS ===" << endl;
        cout << "=== 1. Añadir datos ordenados" << endl;
        cout << "=== 2. Ver datos del arreglo" << endl;
        cout << "=== 3. Buscar un numero" << endl;
        cout << "=== 4. Ordenar lista" << endl;
        cout << "=== 5. Salir" << endl;
        cout << "================================" << endl;
        cout << "Elija una opcion: ";
        cin >> opc;

        // Al elejir una opción se realizará dicha operación
        switch(opc) {
            case 1:
                cout << "*** Ingrese 7 numeros de forma aleatoria a la lista ***" << endl;
                agregarDatos();
                break;
            case 2:
                mostrarDatos();
                break;
            case 3:
                cout << "*** Busque un numero dentro del arreglo ***" << endl;
                buscarNumero();
                break;
            case 4:
                cout << "*** Ordenando de forma ascendente la lista de numeros ***" << endl;
                ordenarLista();
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
