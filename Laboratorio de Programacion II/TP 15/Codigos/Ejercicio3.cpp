#include <iostream>
using namespace std;


class Vehiculo {
public:
    virtual void acelerar() const = 0; 
    virtual ~Vehiculo() {} 
};


class Coche : public Vehiculo {
public:
    void acelerar() const override {
        cout << "El coche acelera suavemente." << endl;
    }
};


class Moto : public Vehiculo {
public:
    void acelerar() const override {
        cout << "La moto acelera rapidamente con un rugido." << endl;
    }
};


int main() {
    Vehiculo* coche = new Coche();
    Vehiculo* moto = new Moto();

    coche->acelerar();
    moto->acelerar();

    delete coche;
    delete moto;

    return 0;
}

