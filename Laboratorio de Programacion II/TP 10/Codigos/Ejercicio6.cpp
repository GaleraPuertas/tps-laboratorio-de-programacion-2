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
cout << "Título: " << titulo << ", Autor: " << autor << ", Año de publicación: " <<
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

cout << "¿Cuántos libros desea ingresar? ";
cin >> n;

for (int i = 0; i < n; ++i) {
cout << "\nIngresar los datos del libro " << i+1 << ":\n";
cout << "Título: ";
cin.ignore();
getline(cin, titulo);
cout << "Autor: ";
getline(cin, autor);
cout << "Año de publicación: ";
cin >> anioPublicacion;

Libro libro(titulo, autor, anioPublicacion);
libros.push_back(libro);
}

sort(libros.begin(), libros.end(), compararPorAnio);

cout << "\nLibros ordenados por año de publicación (de más antiguo a más reciente):\n";
for (const Libro &libro : libros) {
libro.mostrarDatos();
}

return 0;
}
