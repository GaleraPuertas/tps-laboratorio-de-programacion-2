#include <iostream>
using namespace std;

class InstrumentoMusical {
public:
    virtual void tocar() const = 0;
    virtual ~InstrumentoMusical() {}
};


class Piano : public InstrumentoMusical {
public:
    void tocar() const override {
        cout << "El piano esta tocando una melod�a suave" << endl;
    }
};


class Guitarra : public InstrumentoMusical {
public:
    void tocar() const override {
        cout << "La guitarra est� tocando un ritmo vibrante" << endl;
    }
};


class Flauta : public InstrumentoMusical {
public:
    void tocar() const override {
        cout << "La flauta est� tocando una melod�a muy buena" << endl;
    }
};


int main() {
    InstrumentoMusical* piano = new Piano();
    InstrumentoMusical* guitarra = new Guitarra();
    InstrumentoMusical* flauta = new Flauta();

    piano->tocar();
    guitarra->tocar();
    flauta->tocar();

    delete piano;
    delete guitarra;
    delete flauta;

    return 0;
}

