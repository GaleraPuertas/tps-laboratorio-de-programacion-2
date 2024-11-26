#include <iostream>
using namespace std;


class Empleado {
public:
    virtual double calcularSalario() const = 0; 
    virtual ~Empleado() {} 
};


class Gerente : public Empleado {
private:
    double salarioBase;
    double bono;
public:
    Gerente(double base, double bono) : salarioBase(base), bono(bono) {}

    double calcularSalario() const override {
        return salarioBase + bono;
    }
};


class Vendedor : public Empleado {
private:
    double salarioBase;
    double comision;
    int ventas;
public:
    Vendedor(double base, double comision, int ventas) 
        : salarioBase(base), comision(comision), ventas(ventas) {}

    double calcularSalario() const override {
        return salarioBase + (comision * ventas);
    }
};


int main() {
    Empleado* gerente = new Gerente(5000, 2000);
    Empleado* vendedor = new Vendedor(3000, 200, 10);

    cout << "Salario del gerente: $" << gerente->calcularSalario() << endl;
    cout << "Salario del vendedor: $" << vendedor->calcularSalario() << endl;

    delete gerente;
    delete vendedor;

    return 0;
}

