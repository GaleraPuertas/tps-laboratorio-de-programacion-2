#include <iostream>
using namespace std;

class Cuadrado {
private:
    float lado;

public:

    void cargarLado(float l) {
        lado = l;
    }

  
    void imprimirPerimetro() {
        float perimetro = 4 * lado;
        cout << "El perímetro del cuadrado es: " << perimetro << endl;
    }

   
    void imprimirSuperficie() {
        float superficie = lado * lado;
        cout << "La superficie del cuadrado es: " << superficie << endl;
    }
};

int main() {
    Cuadrado c;
    float l;

    cout << "Ingrese el valor del lado del cuadrado: ";
    cin >> l;

    c.cargarLado(l);
    c.imprimirPerimetro();
    c.imprimirSuperficie();

    return 0;
}

