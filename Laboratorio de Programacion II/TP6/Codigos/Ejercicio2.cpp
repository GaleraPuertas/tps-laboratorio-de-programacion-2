#include <iostream>
using namespace std;

class Triangulo {
private:
    float lado1, lado2, lado3;

public:

    void inicializar(float l1, float l2, float l3) {
        lado1 = l1;
        lado2 = l2;
        lado3 = l3;
    }

   
    void imprimirLadoMayor() {
        float mayor = lado1;
        if (lado2 > mayor) {
            mayor = lado2;
        }
        if (lado3 > mayor) {
            mayor = lado3;
        }
        cout << "El lado mayor es: " << mayor << endl;
    }

 
    void esEquilatero() {
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "El tri�ngulo es equil�tero." << endl;
        } else {
            cout << "El tri�ngulo no es equil�tero." << endl;
        }
    }
};

int main() {
    Triangulo t;
    float l1, l2, l3;

    cout << "Ingrese el primer lado del tri�ngulo: ";
    cin >> l1;
    cout << "Ingrese el segundo lado del tri�ngulo: ";
    cin >> l2;
    cout << "Ingrese el tercer lado del tri�ngulo: ";
    cin >> l3;

    t.inicializar(l1, l2, l3);
    t.imprimirLadoMayor();
    t.esEquilatero();

    return 0;
}

