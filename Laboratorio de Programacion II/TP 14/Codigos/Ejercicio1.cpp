#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int paginas;

public:
   
    Libro(string t, string a, int p) : titulo(t), autor(a), paginas(p) {}

   
    string getTitulo() const {
        return titulo;
    }

    string getAutor() const {
        return autor;
    }

    int getPaginas() const {
        return paginas;
    }
};

class Biblioteca {
private:
    vector<Libro> libros;

public:
 
    void agregarLibro(const Libro& libro) {
        libros.push_back(libro);
    }


    void eliminarLibro(const string& titulo) {
        for (size_t i = 0; i < libros.size(); ++i) {
            if (libros[i].getTitulo() == titulo) {
                libros.erase(libros.begin() + i);
                return; 
            }
        }
    }

   
    bool buscarLibro(const string& titulo) {
        for (size_t i = 0; i < libros.size(); ++i) {
            if (libros[i].getTitulo() == titulo) {
                return true; 
            }
        }
        return false; 
    }

    
    int totalPaginas() {
        int total = 0;
        for (size_t i = 0; i < libros.size(); ++i) {
            total += libros[i].getPaginas();
        }
        return total;
    }
};

int main() {
    Biblioteca biblioteca;

   
    biblioteca.agregarLibro(Libro("Cien anios de soledad", "Gabriel Garcia Marquez", 417));
    biblioteca.agregarLibro(Libro("Don Quijote de la Mancha", "Miguel de Cervantes", 863));
    biblioteca.agregarLibro(Libro("La sombra del viento", "Carlos Ruiz Zafon", 575));

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Agregar un libro\n";
        cout << "2. Buscar un libro\n";
        cout << "3. Eliminar un libro\n";
        cout << "4. Mostrar total de páginas\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        
        int opcion;
        cin >> opcion;

        cin.ignore(); 

        switch (opcion) {
            case 1: {
                string titulo, autor;
                int paginas;

                cout << "Ingrese el titulo del libro: ";
                getline(cin, titulo);
                cout << "Ingrese el autor del libro: ";
                getline(cin, autor);
                cout << "Ingrese el numero de paginas: ";
                cin >> paginas;

                biblioteca.agregarLibro(Libro(titulo, autor, paginas));
                cout << "Libro agregado: " << titulo << endl;
                break;
            }
            case 2: {
                string libroABuscar;
                cout << "Ingrese el titulo del libro a buscar: ";
                getline(cin, libroABuscar);

                if (biblioteca.buscarLibro(libroABuscar)) {
                    cout << "El libro '" << libroABuscar << "' se encontro en la biblioteca." << endl;
                } else {
                    cout << "El libro '" << libroABuscar << "' no se encontro en la biblioteca." << endl;
                }
                break;
            }
            case 3: {
                string tituloEliminar;
                cout << "Ingrese el titulo del libro a eliminar: ";
                getline(cin, tituloEliminar);

                biblioteca.eliminarLibro(tituloEliminar);
                cout << "Se elimino el libro '" << tituloEliminar << "'." << endl;
                break;
            }
            case 4: {
                cout << "Numero total de paginas en la biblioteca: " << biblioteca.totalPaginas() << endl;
                break;
            }
            case 5: {
                cout << "Saliendo del programa." << endl;
                return 0; 
            }
            default:
                cout << "Opción no valida, por favor intente de nuevo." << endl;
        }
    }

    return 0;
}

