#include <iostream>
#include <cmath> // Añadimos la librería cmath para utilizar las funciones pow() y sqrt()

using namespace std;

// Funciones para realizar las operaciones matemáticas

// SUMA
double Suma(double n1, double n2) {
    return n1 + n2;
}

// RESTA
double Resta(double n1, double n2) {
    return n1 - n2;
}

// MULTIPLICACIÓN
double Multiplicacion(double n1, double n2) {
    return n1 * n2;
}

// DIVISIÓN
double Division(double n1, double n2) {
    // Evaluamos que el usuario no divida entre cero para evitar errores
    if (n2 != 0)
        return n1 / n2;
    else {
        cout << "Error: No se puede dividir entre cero." << endl;
        return 0;
    }
}

// ELEVAR A UNA POTENCIA
double Potencia(double base, double exponente){
    // Almaceno el valor de la base en una variable
    double pot = base;
    // Realizo una iteracion para la cantidad de veces que se multiplicara por si mismo
    // Utilizando el exponente como limite de la iteracion
    for(int i = 1; i < exponente; i++){
        // Realizo la multiplicacion del exponente por su valor original
        // Y lo almaceno en la misma variable para devolver el resultado
        base = base * pot;
    }
    // Devolvemos el resultado del exponente
    return base;
}

// RAÍZ CUADRADA DE UN NÚMERO
double RaizCuadrada(double num){
    return sqrt(num);
}

// FACTORIAL DE UN NÚMERO
double Factorial(double num){
    double factorial = 1.0; // Inicializamos la variable para el número final del factorial
    
    // Creamos un bucle FOR para iterar en el número que proporcionamos para calcular el factorial
    // Iniciando desde el final del factorial hasta el valor del número; contando desde uno.
    for (int i = 1; i <= num; i++){
        factorial *= i;
    }

    return factorial;
}

int main() {
    // Nuestras variables de trabajo para las operaciones
    double num1, num2, res = 0;
    // Variable para elejir una de las opciones
    int opc = 0;

    // Limpiamos la pantalla para mantener estático el menú
    system("cls");

    do {
        // Menú de opciones
        cout << "=== CALCULADORA ===" << endl;
        cout << "=== 1. Suma" << endl;
        cout << "=== 2. Resta" << endl;
        cout << "=== 3. Multiplicacion" << endl;
        cout << "=== 4. Division" << endl;
        cout << "=== 5. Exponente" << endl;
        cout << "=== 6. Raíz Cuadrada" << endl;
        cout << "=== 7. Factorial" << endl;
        cout << "=== 8. Salir" << endl;
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
                cout << "Ingrese la base: ";
                cin >> num1;
                cout << "Ingrese el exponente: ";
                cin >> num2;
                res = Potencia(num1, num2);
                cout << "La potencia es: " << res << endl;
                break;
            case 6:
                cout << "Ingrese el numero: ";
                cin >> num1;
                res = RaizCuadrada(num1);
                cout << "La raíz cuadrada de " << num1 << " es: " << res << endl;
                break;
            case 7:
                cout << "Ingrese el numero: ";
                cin >> num1;
                res = Factorial(num1);
                cout << "El factorial de " << num1 << " es: " << res << endl;
                break;
            case 8:
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

    } while(opc != 8);

    return 0;
}
