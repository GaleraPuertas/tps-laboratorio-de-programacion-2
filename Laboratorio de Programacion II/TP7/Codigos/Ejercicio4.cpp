#include <iostream>
#include <string>
using namespace std;

class CEmpleados {
private:
    string nombre;
    float salario;
    int horasTrabajoPorDia;

public:

    CEmpleados(string nom, float sal, int horas) {
        nombre = nom;
        salario = sal;
        horasTrabajoPorDia = horas;
    }


    void aumentarSalario() {
        if (horasTrabajoPorDia == 8) {
            salario += 250000;
        } else if (horasTrabajoPorDia == 10) {
            salario += 300000;
        } else if (horasTrabajoPorDia >= 12) {
            salario += 350000;
        }
    }

    
    void imprimirDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Salario final: $" << salario << endl;
    }
};

int main() {
    string nombre;
    float salario;
    int horasTrabajoPorDia;

    
    cout << "Ingrese el nombre del empleado: ";
    getline(cin, nombre);
    cout << "Ingrese el salario del empleado: ";
    cin >> salario;
    cout << "Ingrese las horas de trabajo por día del empleado: ";
    cin >> horasTrabajoPorDia;

 
    CEmpleados empleado(nombre, salario, horasTrabajoPorDia);


    empleado.aumentarSalario();

    empleado.imprimirDatos();

    return 0;
}

