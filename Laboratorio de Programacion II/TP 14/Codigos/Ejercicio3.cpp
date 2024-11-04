#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Empleado {
private:
    string nombre;
    double salario;
    string departamento;

public:
    Empleado(string nom, double sal, string dep) : nombre(nom), salario(sal), departamento(dep) {}

    double getSalario() const {
        return salario;
    }

    string getDepartamento() const {
        return departamento;
    }

    string getNombre() const {
        return nombre;
    }
};

class Empresa {
private:
    vector<Empleado> empleados;

public:
    void agregarEmpleado(string nombre, double salario, string departamento) {
        Empleado nuevoEmpleado(nombre, salario, departamento);
        empleados.push_back(nuevoEmpleado);
    }

    double calcularNominaTotal() const {
        double total = 0;
        for (int i = 0; i < empleados.size(); i++) {
            total += empleados[i].getSalario();
        }
        return total;
    }

    Empleado encontrarMayorSalario() const {
        Empleado mayor("", 0, "");
        if (empleados.empty()) {
            cout << "No hay empleados en la empresa." << endl;
            return mayor; // Devuelve un empleado vacío
        }
        mayor = empleados[0];
        for (int i = 1; i < empleados.size(); i++) {
            if (empleados[i].getSalario() > mayor.getSalario()) {
                mayor = empleados[i];
            }
        }
        return mayor;
    }

    void listarEmpleadosPorDepartamento(string dep) const {
        bool encontrados = false;
        for (int i = 0; i < empleados.size(); i++) {
            if (empleados[i].getDepartamento() == dep) {
                cout << "Empleado: " << empleados[i].getNombre() << ", Salario: " << empleados[i].getSalario() << endl;
                encontrados = true;
            }
        }
        if (!encontrados) {
            cout << "No hay empleados en el departamento " << dep << "." << endl;
        }
    }
};

int main() {
    Empresa empresa;
    int opcion;
    do {
        cout << "\nOpciones:\n";
        cout << "1. Agregar empleado\n";
        cout << "2. Calcular nomina total\n";
        cout << "3. Encontrar empleado con mayor salario\n";
        cout << "4. Listar empleados por departamento\n";
        cout << "0. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombre, departamento;
                double salario;
                cout << "Ingrese nombre del empleado: ";
                cin >> nombre;
                cout << "Ingrese salario del empleado: ";
                cin >> salario;
                cout << "Ingrese departamento del empleado: ";
                cin >> departamento;
                empresa.agregarEmpleado(nombre, salario, departamento);
                break;
            }
            case 2:
                cout << "Nomina total: " << empresa.calcularNominaTotal() << endl;
                break;
            case 3: {
                Empleado mayor = empresa.encontrarMayorSalario();
                if (mayor.getSalario() > 0) {
                    cout << "Empleado con mayor salario: " << mayor.getNombre() << ", Salario: " << mayor.getSalario() << endl;
                }
                break;
            }
            case 4: {
                string departamento;
                cout << "Ingrese departamento a listar: ";
                cin >> departamento;
                empresa.listarEmpleadosPorDepartamento(departamento);
                break;
            }
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 0);

    return 0;
}

