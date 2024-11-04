#include <iostream>
#include <vector>

using namespace std;

class Mesa {
private:
    int numComensales;
    bool ocupada;

public:
    Mesa(int num) : numComensales(num), ocupada(false) {}

    void reservar() {
        if (!ocupada) {
            ocupada = true;
            cout << "Mesa reservada para " << numComensales << " comensales." << endl;
        } else {
            cout << "La mesa ya esta ocupada." << endl;
        }
    }

    void liberar() {
        if (ocupada) {
            ocupada = false;
            cout << "Mesa liberada." << endl;
        } else {
            cout << "La mesa ya esta libre." << endl;
        }
    }

    bool estaLibre() const {
        return !ocupada;
    }

    int getNumComensales() const {
        return numComensales;
    }
};

class Restaurante {
private:
    vector<Mesa> mesas;

public:
    Restaurante(int numMesas, int numComensalesPorMesa) {
        for (int i = 0; i < numMesas; ++i) {
            Mesa nuevaMesa(numComensalesPorMesa);
            mesas.push_back(nuevaMesa);
        }
    }

    void reservarMesa(int numMesa) {
        if (numMesa < 1 || numMesa > mesas.size()) {
            cout << "Numero de mesa no valido." << endl;
            return;
        }
        mesas[numMesa - 1].reservar();
    }

    void liberarMesa(int numMesa) {
        if (numMesa < 1 || numMesa > mesas.size()) {
            cout << "Numero de mesa no valido." << endl;
            return;
        }
        mesas[numMesa - 1].liberar();
    }

    int obtenerMesasLibres() const {
        int libres = 0;
        for (int i = 0; i < mesas.size(); ++i) {
            if (mesas[i].estaLibre()) {
                libres++;
            }
        }
        return libres;
    }
};

int main() {
    int numMesas, numComensalesPorMesa;

    cout << "Ingrese el numero de mesas: ";
    cin >> numMesas;
    cout << "Ingrese el numero de comensales por mesa: ";
    cin >> numComensalesPorMesa;

    Restaurante restaurante(numMesas, numComensalesPorMesa);

    int opcion;
    do {
        cout << "\nOpciones:\n";
        cout << "1. Reservar mesa\n";
        cout << "2. Liberar mesa\n";
        cout << "3. Mostrar mesas libres\n";
        cout << "0. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int numMesa;
                cout << "Ingrese el numero de mesa a reservar: ";
                cin >> numMesa;
                restaurante.reservarMesa(numMesa);
                break;
            }
            case 2: {
                int numMesa;
                cout << "Ingrese el numero de mesa a liberar: ";
                cin >> numMesa;
                restaurante.liberarMesa(numMesa);
                break;
            }
            case 3:
                cout << "Numero de mesas libres: " << restaurante.obtenerMesasLibres() << endl;
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 0);

    return 0;
}

