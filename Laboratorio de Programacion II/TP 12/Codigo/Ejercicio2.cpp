#include <iostream>
using namespace std;

class ClaseBase {
protected:
    int unaVar;
    int edad;
public:
    
    ClaseBase(int e, int x = 0) : unaVar(x), edad(e) {}

    void imprimirDatos() {
        cout << "unaVar = " << unaVar << ", Edad = " << edad << endl;
    }

    void esMayorDeEdad() {
        if (edad >= 18)
            cout << "Es mayor de edad." << endl;
        else
            cout << "No es mayor de edad." << endl;
    }
};

class ClaseDerivada : public ClaseBase {
public:
    
    ClaseDerivada(int e) : ClaseBase(e) {}
};

class Vector {
    int elementos[5];
public:
    void cargar() {
        cout << "Ingrese 5 valores para el vector:" << endl;
        for (int i = 0; i < 5; ++i) {
            cin >> elementos[i];
        }
    }

    void imprimir() {
        for (int i = 0; i < 5; ++i)
            cout << elementos[i] << " ";
        cout << endl;
    }

    void imprimir(int hasta) {
        if (hasta > 5) hasta = 5; 
        for (int i = 0; i < hasta; ++i)
            cout << elementos[i] << " ";
        cout << endl;
    }

    void imprimir(int desde, int hasta) {
        if (desde < 0) desde = 0; 
        if (hasta > 5) hasta = 5;
        for (int i = desde; i < hasta; ++i)
            cout << elementos[i] << " ";
        cout << endl;
    }
};

int main() {
    int edad;
    cout << "Ingrese la edad: ";
    cin >> edad;

    ClaseDerivada obj1(edad);  
    obj1.imprimirDatos();
    obj1.esMayorDeEdad();

    Vector vec;
    vec.cargar();

    int opcion;
    cout << "Seleccione opción de impresión del vector:\n1. Imprimir todo\n2. Imprimir hasta un índice\n3. Imprimir en un rango\n";
    cin >> opcion;

    if (opcion == 1) {
        vec.imprimir();
    } 
    else if (opcion == 2) {
        int hasta;
        cout << "Ingrese el índice hasta el cual desea imprimir (1 a 5): ";
        cin >> hasta;
        vec.imprimir(hasta);
    } 
    else if (opcion == 3) {
        int desde, hasta;
        cout << "Ingrese el índice de inicio y fin (0 a 4 para el inicio y 1 a 5 para el fin): ";
        cin >> desde >> hasta;
        vec.imprimir(desde, hasta);
    } 
    else {
        cout << "Opción no válida." << endl;
    }

    return 0;
}

