#include <iostream>
using namespace std;

class Operaciones {
private:
    int valor1, valor2;

public:
 
    void cargarValores() {
        cout << "Ingrese el primer valor: ";
        cin >> valor1;
        cout << "Ingrese el segundo valor: ";
        cin >> valor2;
    }

  
    int sumar() {
        return valor1 + valor2;
    }

  
    int restar() {
        return valor1 - valor2;
    }


    int multiplicar() {
        return valor1 * valor2;
    }


    float dividir() {
        if (valor2 != 0) {
            return static_cast<float>(valor1) / valor2;
        } else {
            cout << "Error: División por cero." << endl;
            return 0;
        }
    }


    void imprimirResultados() {
        cout << "Suma: " << sumar() << endl;
        cout << "Resta: " << restar() << endl;
        cout << "Multiplicación: " << multiplicar() << endl;
        cout << "División: " << dividir() << endl;
    }
};

int main() {
    Operaciones op;
    op.cargarValores();
    op.imprimirResultados();

    return 0;
}

