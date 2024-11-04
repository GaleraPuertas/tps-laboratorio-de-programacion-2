#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
string nombre;
double sueldo;
public:
Empleado(const string& nom, double sue) : nombre(nom), sueldo(sue) {}
void imprimirDatos() const {
cout << "Nombre: " << nombre << endl;
cout << "Sueldo: " << sueldo << endl;
}
void debePagarImpuestos() const {
if (sueldo > 3000) {
cout << nombre << " debe pagar impuestos." << endl;
} else {
cout << nombre << " no debe pagar impuestos." << endl;
}
}
};
int main() {
Empleado empleado1("Ana Gomez", 3500);
empleado1.imprimirDatos();
empleado1.debePagarImpuestos();
return 0;
}
