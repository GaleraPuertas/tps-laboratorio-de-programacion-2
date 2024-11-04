#include <iostream>
using namespace std;
class Operaciones {
private:
int numero1;

int numero2;
public:
Operaciones(int n1, int n2) : numero1(n1), numero2(n2) {}
int sumar() const {
return numero1 + numero2;
}
int restar() const {
return numero1 - numero2;
}
int multiplicar() const {
return numero1 * numero2;
}
double dividir() const {
if (numero2 != 0) {
return static_cast<double>(numero1) / numero2;
} else {
cout << "Error: Division por cero." << endl;
return 0.0;
}
}
void imprimirResultados() const {
cout << "Suma: " << sumar() << endl;
cout << "Resta: " << restar() << endl;
cout << "Multiplicacion: " << multiplicar() << endl;
double resultadoDivision = dividir();
if (numero2 != 0) {
cout << "Division: " << resultadoDivision << endl;
}
}
};
int main() {

Operaciones op(10, 5);
op.imprimirResultados();
return 0;
}
