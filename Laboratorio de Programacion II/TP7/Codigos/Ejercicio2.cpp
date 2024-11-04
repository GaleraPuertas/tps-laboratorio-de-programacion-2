#include <iostream>
using namespace std;

class Comparador {
private:
    int obtenerMayor(int num1, int num2) {
        return (num1 > num2) ? num1 : num2;
    }

public:
    void cargarEnteros() {
        int num1, num2;

        cout << "Ingrese el primer entero: ";
        cin >> num1;
        cout << "Ingrese el segundo entero: ";
        cin >> num2;

        int mayor = obtenerMayor(num1, num2);
        cout << "El mayor de los dos enteros es: " << mayor << endl;
    }
};

int main() {
    Comparador comparador;
    comparador.cargarEnteros();

    return 0;
}

