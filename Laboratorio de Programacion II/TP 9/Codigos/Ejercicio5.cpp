#include <iostream>
#include <string>
using namespace std;
class Estudiante {
private:
string nombre;
int edad;
float calificacion;
public:
void setNombre(const string& nom) {
nombre = nom;
}
void setEdad(int ed) {
edad = ed;
}
void setCalificacion(float cal) {
calificacion = cal;
}
string getNombre() const {
return nombre;
}
int getEdad() const {
return edad;
}
float getCalificacion() const {
return calificacion;
}
};

int main() {

Estudiante estudiante;
estudiante.setNombre("Carlos Mendoza");
estudiante.setEdad(21);
estudiante.setCalificacion(8.5f);

cout << "Nombre: " << estudiante.getNombre() << endl;
cout << "Edad: " << estudiante.getEdad() << endl;
cout << "Calificacion: " << estudiante.getCalificacion() << endl;

return 0;
}
