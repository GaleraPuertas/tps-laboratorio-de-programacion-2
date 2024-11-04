#include <iostream>
#include <string>

using namespace std;
class Alumno {
private:
string nombre;
int edad;
public:
Alumno(const string& nom, int ed) : nombre(nom), edad(ed) {}
void imprimirDatos() const {
cout << "Nombre: " << nombre << endl;
cout << "Edad: " << edad << endl;
}
void esMayorDeEdad() const {
if (edad >= 18) {
cout << nombre << " es mayor de edad." << endl;
} else {
cout << nombre << " no es mayor de edad." << endl;
}
}
};
int main() {

Alumno alumno1("Juan Perez", 20);
alumno1.imprimirDatos();
alumno1.esMayorDeEdad();
return 0;
}
