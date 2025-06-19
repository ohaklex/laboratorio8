#include <iostream>
using namespace std;

//6 numero perfecto

bool esNumeroPerfecto(int numero) {
    int suma = 0;

    
    for (int i = 1; i < numero; ++i) {
        if (numero % i == 0) {
            suma += i;
        }
    }

    
    return suma == numero;
}

int main() {
    int numero;

    
    cout << "Ingresa un número: ";
    cin >> numero;

    
    if (numero <= 0) {
        cout << "Por favor, ingresa un número entero positivo." << endl;
        return 1;
    }

    
    if (esNumeroPerfecto(numero)) {
        cout << numero << " es un número perfecto." << endl;
    } else {
        cout << numero << " no es un número perfecto." << endl;
    }

    return 0;
}
