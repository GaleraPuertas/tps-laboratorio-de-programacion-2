#include <iostream>
using namespace std;

class Numeros {
public:
   
    int cargarValor() {
        int valor;
        cout << "Ingrese un valor entero: ";
        cin >> valor;
        return valor;
    }

  
    void mostrarNumerosHasta(int limite) {
        if (limite <= 0) {
            cout << "El valor ingresado debe ser mayor que cero." << endl;
            return;
        }

        cout << "Números desde 1 hasta " << limite << ":" << endl;
        for (int i = 1; i <= limite; ++i) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    Numeros numeros;
    int valorIngresado = numeros.cargarValor();
    numeros.mostrarNumerosHasta(valorIngresado);

    return 0;
}

