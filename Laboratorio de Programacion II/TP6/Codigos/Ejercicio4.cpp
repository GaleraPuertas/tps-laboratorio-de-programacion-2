#include <iostream>
using namespace std;

class Empleado {
private:
    string nombre;
    float sueldo;

public:

    void cargarDatos(string nom, float suel) {
        nombre = nom;
        sueldo = suel;
    }

 
    void imprimirDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Sueldo: " << sueldo << endl;
    }


    void verificarImpuestos() {
        if (sueldo > 3000) {
            cout << "Debe pagar impuestos." << endl;
        } else {
            cout << "No debe pagar impuestos." << endl;
        }
    }
};

int main() {
    Empleado emp;
    string nombre;
    float sueldo;

    cout << "Ingrese el nombre del empleado: ";
    getline(cin, nombre);
    cout << "Ingrese el sueldo del empleado: ";
    cin >> sueldo;

    emp.cargarDatos(nombre, sueldo);
    emp.imprimirDatos();
    emp.verificarImpuestos();

    return 0;
}

