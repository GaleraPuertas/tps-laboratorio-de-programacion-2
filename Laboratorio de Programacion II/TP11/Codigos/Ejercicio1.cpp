#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Alumno {
private:
    string nombre;
    int edad;
    double nota1;
    double nota2;
    double nota3;
    string estado;

public:
    
    Alumno(string nombre, int edad, double nota1, double nota2, double nota3)
    : nombre(nombre), edad(edad), nota1(nota1), nota2(nota2), nota3(nota3) {
        actualizarEstado(); 
    }

  
    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
    double getNota1() const { return nota1; }
    double getNota2() const { return nota2; }
    double getNota3() const { return nota3; }
    string getEstado() const { return estado; }

    
    double calcularPromedio() const { return (nota1 + nota2 + nota3) / 3; }


    void actualizarEstado() {
        double promedio = calcularPromedio();
        estado = (promedio >= 7) ? "aprobado" : "desaprobado";
    }
};

int main() {
   
    vector<Alumno> alumnos;

  
    string nombre;
    int edad;
    double nota1, nota2, nota3;
    int numAlumnos;

    cout << "Ingrese el n�mero de alumnos: ";
    cin >> numAlumnos;

    for (int i = 0; i < numAlumnos; i++) {
        cout << "Ingrese el nombre del alumno: ";
        cin >> nombre;
        cout << "Ingrese la edad del alumno: ";
        cin >> edad;
        cout << "Ingrese la nota 1 del alumno: ";
        cin >> nota1;
        cout << "Ingrese la nota 2 del alumno: ";
        cin >> nota2;
        cout << "Ingrese la nota 3 del alumno: ";
        cin >> nota3;

        alumnos.push_back(Alumno(nombre, edad, nota1, nota2, nota3));
    }

   
    cout << "\nDatos de los alumnos:" << endl;
    for (size_t i = 0; i < alumnos.size(); i++) {
        cout << "Nombre: " << alumnos[i].getNombre() << endl;
        cout << "Edad: " << alumnos[i].getEdad() << endl;
        cout << "Nota 1: " << alumnos[i].getNota1() << endl;
        cout << "Nota 2: " << alumnos[i].getNota2() << endl;
        cout << "Nota 3: " << alumnos[i].getNota3() << endl;
        cout << "Promedio: " << alumnos[i].calcularPromedio() << endl;
        cout << "Estado: " << alumnos[i].getEstado() << endl;
        cout << endl;
    }

    return 0;
}

