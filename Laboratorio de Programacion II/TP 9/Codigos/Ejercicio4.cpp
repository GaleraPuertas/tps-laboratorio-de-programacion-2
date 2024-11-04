#include <iostream>
using namespace std;

class Sumatoria {
private:
int suma;
public:

Sumatoria() : suma(0) {
int valor;
cout << "Ingrese valores enteros (0 para finalizar):" << endl;
do {
cin >> valor;
suma += valor;
} while (valor != 0);
}
~Sumatoria() {
cout << "La suma de los valores ingresados es: " << suma << endl;
}
};

int main() {
Sumatoria sumatoria;
return 0;
}
