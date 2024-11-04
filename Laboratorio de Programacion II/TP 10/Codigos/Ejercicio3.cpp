#include <iostream>
#include <vector>
using namespace std;

class Alumno {
private:
string nombre;
float nota1, nota2, nota3;

public:

Alumno(string nom, float n1, float n2, float n3) {
nombre = nom;
nota1 = n1;
nota2 = n2;
nota3 = n3;
}

void mostrarDatos() {
cout << "Nombre: " << nombre << endl;
cout << "Nota 1: " << nota1 << endl;
cout << "Nota 2: " << nota2 << endl;
cout << "Nota 3: " << nota3 << endl;
cout << "--------------------------" << endl;
}

};

int main() {
vector<Alumno> alumnos;
string nombre;
float nota1, nota2, nota3;
int n;

cout << "¿Cuántos alumnos desea ingresar? ";
cin >> n;

for (int i = 0; i < n; ++i) {
cout << "\nIngresar los datos del alumno " << i+1 << ":\n";
cout << "Nombre: ";
cin.ignore();
getline(cin, nombre);
cout << "Nota 1: ";
cin >> nota1;
cout << "Nota 2: ";
cin >> nota2;
cout << "Nota 3: ";
cin >> nota3;

Alumno alumno(nombre, nota1, nota2, nota3);
alumnos.push_back(alumno);
}

cout << "\n\nDatos de los alumnos:\n";
for (int i = 0; i < alumnos.size(); ++i) {
alumnos[i].mostrarDatos();
}

return 0;
}
