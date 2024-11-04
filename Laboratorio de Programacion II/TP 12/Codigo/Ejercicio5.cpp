#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
public:
    void cargarDatos() {
        cout << "Ingrese nombre: ";
        cin >> nombre;
        cout << "Ingrese edad: ";
        cin >> edad;
    }

    void imprimirDatos() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

class Empleado : public Persona {
    float sueldo;
public:
    void cargarSueldo() {
        cout << "Ingrese sueldo: ";
        cin >> sueldo;
    }

    void imprimirSueldo() {
        cout << "Sueldo: " << sueldo << endl;
    }
};

int main() {
    Persona persona;
    persona.cargarDatos();
    persona.imprimirDatos();

    Empleado empleado;
    empleado.cargarDatos();
    empleado.cargarSueldo();
    empleado.imprimirDatos();
    empleado.imprimirSueldo();

    return 0;
}

