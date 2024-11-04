#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

class Figura {
protected:
    string color;
    double x, y;

public:
    Figura(string col, double posX, double posY) : color(col), x(posX), y(posY) {}

    virtual double calcularArea() const = 0;
    virtual double calcularPerimetro() const = 0;

    string getColor() const {
        return color;
    }

    void setColor(string col) {
        color = col;
    }
};

class Circulo : public Figura {
private:
    double radio;

public:
    Circulo(string col, double posX, double posY, double rad) : Figura(col, posX, posY), radio(rad) {}

    double calcularArea() const override {
        return M_PI * radio * radio;
    }

    double calcularPerimetro() const override {
        return 2 * M_PI * radio;
    }
};

class Rectangulo : public Figura {
private:
    double ancho, alto;

public:
    Rectangulo(string col, double posX, double posY, double an, double al) : Figura(col, posX, posY), ancho(an), alto(al) {}

    double calcularArea() const override {
        return ancho * alto;
    }

    double calcularPerimetro() const override {
        return 2 * (ancho + alto);
    }
};

class Triangulo : public Figura {
private:
    double base, altura;

public:
    Triangulo(string col, double posX, double posY, double bas, double alt) : Figura(col, posX, posY), base(bas), altura(alt) {}

    double calcularArea() const override {
        return (base * altura) / 2;
    }

    double calcularPerimetro() const override {
        return 3 * base; // Asumiendo triángulo equilátero
    }
};

int main() {
    vector<Figura*> figuras;
    int opcion;

    do {
        cout << "\nOpciones:\n";
        cout << "1. Agregar circulo\n";
        cout << "2. Agregar rectangulo\n";
        cout << "3. Agregar triangulo\n";
        cout << "4. Calcular areas y perimetros\n";
        cout << "0. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string color;
                double x, y, radio;
                cout << "Ingrese color del circulo: ";
                cin >> color;
                cout << "Ingrese posicion X: ";
                cin >> x;
                cout << "Ingrese posicion Y: ";
                cin >> y;
                cout << "Ingrese radio: ";
                cin >> radio;
                figuras.push_back(new Circulo(color, x, y, radio));
                break;
            }
            case 2: {
                string color;
                double x, y, ancho, alto;
                cout << "Ingrese color del rectangulo: ";
                cin >> color;
                cout << "Ingrese posicion X: ";
                cin >> x;
                cout << "Ingrese posicion Y: ";
                cin >> y;
                cout << "Ingrese ancho: ";
                cin >> ancho;
                cout << "Ingrese alto: ";
                cin >> alto;
                figuras.push_back(new Rectangulo(color, x, y, ancho, alto));
                break;
            }
            case 3: {
                string color;
                double x, y, base, altura;
                cout << "Ingrese color del triangulo: ";
                cin >> color;
                cout << "Ingrese posicion X: ";
                cin >> x;
                cout << "Ingrese posicion Y: ";
                cin >> y;
                cout << "Ingrese base: ";
                cin >> base;
                cout << "Ingrese altura: ";
                cin >> altura;
                figuras.push_back(new Triangulo(color, x, y, base, altura));
                break;
            }
            case 4:
                for (int i = 0; i < figuras.size(); i++) {
                    cout << "Color: " << figuras[i]->getColor() << ", Area: " << figuras[i]->calcularArea() << ", Perimetro: " << figuras[i]->calcularPerimetro() << endl;
                }
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 0);

    for (int i = 0; i < figuras.size(); i++) {
        delete figuras[i];
    }

    return 0;
}

