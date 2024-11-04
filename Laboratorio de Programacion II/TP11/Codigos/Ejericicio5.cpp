#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Alumno {
private:
    string nombre;
    double nota1;
    double nota2;
    double nota3;

public:
  
    Alumno(string nombre, double nota1, double nota2, double nota3)
    : nombre(nombre), nota1(nota1), nota2(nota2), nota3(nota3) {}
    string getNombre() const { return nombre; }
    double getNota1() const { return nota1; }
    double getNota2() const { return nota2; }
    double getNota3() const { return nota3; }

    
    double calcularPromedio() const { return (nota1 + nota2 + nota3) / 3; }
};

int main() {

    vector<Alumno> alumnos;  
    string nombre;
    double nota1, nota2, nota3;
    int numAlumnos;

    cout << "Ingrese el n�mero de alumnos: ";
    cin >> numAlumnos;

    for (int i = 0; i < numAlumnos; i++) {
        cout << "Ingrese el nombre del alumno: ";
        cin >> nombre;
        cout << "Ingrese la nota 1 del alumno: ";
        cin >> nota1;
        cout << "Ingrese la nota 2 del alumno: ";
        cin >> nota2;
        cout << "Ingrese la nota 3 del alumno: ";
        cin >> nota3;

        alumnos.push_back(Alumno(nombre, nota1, nota2, nota3));
    }
   
    cout << "\nDatos de los alumnos:" << endl;
    double sumaPromedios = 0.0;

    for (size_t i = 0; i < alumnos.size(); i++) {
        cout << "Nombre: " << alumnos[i].getNombre() << endl;
        cout << "Nota 1: " << alumnos[i].getNota1() << endl;
        cout << "Nota 2: " << alumnos[i].getNota2() << endl;
        cout << "Nota 3: " << alumnos[i].getNota3() << endl;
        double promedio = alumnos[i].calcularPromedio();
        cout << "Promedio: " << promedio << endl;
        sumaPromedios += promedio;  
        cout << endl;
    }

    if (numAlumnos > 0) {
        double promedioGeneral = sumaPromedios / numAlumnos;
        cout << "Promedio general de todos los alumnos: " << promedioGeneral << endl;
    } else {
        cout << "No hay alumnos para calcular el promedio general." << endl;
    }

    return 0;
}

