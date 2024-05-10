#include <iostream>

using namespace std;

// Nuestras variables
int a, b, h;

int main()
{
    // Las inicializamos con los datos que utilizaremos
    a = 0;
    b = 7;
    h = 3;

    cout << "*** Calculo de areas en figuras geometricas ***" << endl;
    cout << "Se utilizaran los siguientes datos: Base: " << b << ", Altura: " << h << "\n" << endl;
    cout << "1. Area de un Rectangulo" << endl;
    a = b * h;
    cout << "Area: " << a << "\n" << endl;
    cout << "2. Area de un Triangulo" << endl;
    a = b * h / 2;
    cout << "Area: " << a << "\n" << endl;

    return 0;
}
