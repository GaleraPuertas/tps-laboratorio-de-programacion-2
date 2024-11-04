#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Libro {
public:
string titulo;
string autor;

int anioPublicacion;

Libro(string tit, string aut, int anio) {
titulo = tit;
autor = aut;
anioPublicacion = anio;
}

void mostrarDatos() const {
cout << "T�tulo: " << titulo << ", Autor: " << autor << ", A�o de publicaci�n: " <<
anioPublicacion << endl;
}
};

bool compararPorAnio(const Libro &l1, const Libro &l2) {
return l1.anioPublicacion < l2.anioPublicacion;
}

int main() {
vector<Libro> libros;
string titulo, autor;
int anioPublicacion;
int n;

cout << "�Cu�ntos libros desea ingresar? ";
cin >> n;

for (int i = 0; i < n; ++i) {
cout << "\nIngresar los datos del libro " << i+1 << ":\n";
cout << "T�tulo: ";
cin.ignore();
getline(cin, titulo);
cout << "Autor: ";
getline(cin, autor);
cout << "A�o de publicaci�n: ";
cin >> anioPublicacion;

Libro libro(titulo, autor, anioPublicacion);
libros.push_back(libro);
}

sort(libros.begin(), libros.end(), compararPorAnio);

cout << "\nLibros ordenados por a�o de publicaci�n (de m�s antiguo a m�s reciente):\n";
for (const Libro &libro : libros) {
libro.mostrarDatos();
}

return 0;
}
