#include <iostream>
#include <cmath> 
using namespace std;


class Figura {
public:
    virtual double calcularArea() const = 0; 
    virtual ~Figura() {} 
};


class Rectangulo : public Figura {
private:
    double largo, ancho;
public:
    Rectangulo(double l, double a) : largo(l), ancho(a) {}

    double calcularArea() const override {
        return largo * ancho;
    }
};


class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}

    double calcularArea() const override {
        return M_PI * radio * radio;
    }
};


int main() {
    Figura* rect = new Rectangulo(4.0, 5.0);
    Figura* circ = new Circulo(3.0);

    cout << "Area del rectangulo: " << rect->calcularArea() << endl;
    cout << "Area del circulo: " << circ->calcularArea() << endl;

    delete rect;
    delete circ;

    return 0;
}

