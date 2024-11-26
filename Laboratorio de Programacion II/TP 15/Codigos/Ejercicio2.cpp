#include <iostream>
using namespace std;

// Clase base Animal
class Animal {
public:
    virtual void hacerSonido() const = 0; // Función virtual pura
    virtual ~Animal() {} // Destructor virtual
};

// Clase derivada Perro
class Perro : public Animal {
public:
    void hacerSonido() const override {
        cout << "Guau Guau" << endl;
    }
};

// Clase derivada Gato
class Gato : public Animal {
public:
    void hacerSonido() const override {
        cout << "Miau Miau" << endl;
    }
};

// Clase derivada Pato
class Pato : public Animal {
public:
    void hacerSonido() const override {
        cout << "Cuac Cuac" << endl;
    }
};

// Función principal para probar las clases
int main() {
    Animal* perro = new Perro();
    Animal* gato = new Gato();
    Animal* pato = new Pato();

    perro->hacerSonido();
    gato->hacerSonido();
    pato->hacerSonido();

    delete perro;
    delete gato;
    delete pato;

    return 0;
}

