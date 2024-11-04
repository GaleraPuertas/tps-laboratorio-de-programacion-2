#include <iostream>
#include <string>
using namespace std;

class Socio {
    string nombre;
    int antiguedad;
public:
    Socio() {
        cout << "Ingrese el nombre del socio: ";
        cin >> nombre;
        cout << "Ingrese la antiguedad en el club (en anios): ";
        cin >> antiguedad;
    }

    string getNombre() const { return nombre; }
    int getAntiguedad() const { return antiguedad; }
};

class Club {
    Socio socios[3];
public:
    Club() {
        cout << "Cargando datos de los socios del club..." << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "Datos del socio " << i + 1 << ":" << endl;
            socios[i] = Socio();
        }
    }

    void imprimirSocioConMayorAntiguedad() {
        Socio mayor = socios[0];
        for (int i = 1; i < 3; ++i) {
            if (socios[i].getAntiguedad() > mayor.getAntiguedad())
                mayor = socios[i];
        }
        cout << "Socio con mayor antiguedad: " << mayor.getNombre() << " con " << mayor.getAntiguedad() << " anios" << endl;
    }
};

int main() {
    Club club;
    club.imprimirSocioConMayorAntiguedad();
    return 0;
}

