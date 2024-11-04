#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Calculadora {
public:
    int sumar(int a, int b) {
        return a + b;
    }

    float sumar(float a, float b) {
        return a + b;
    }

    int restar(int a, int b) {
        return a - b;
    }

    float restar(float a, float b) {
        return a - b;
    }

    int multiplicar(int a, int b) {
        return a * b;
    }

    float multiplicar(float a, float b) {
        return a * b;
    }

    float dividir(int a, int b) {
        if (b != 0) {
            return static_cast<float>(a) / b;
        }
        cout << "Error: Division por cero." << endl;
        return NAN; 
    }

    float dividir(float a, float b) {
        if (b != 0) {
            return a / b;
        }
        cout << "Error: Division por cero." << endl;
        return NAN;
    }
};

class Comparador {
public:
    template <typename T>
    bool comparar(const T& a, const T& b) {
        return a == b;
    }
};

class Conversor {
public:
    float convertirKilometrosAMetros(float km) {
        return km * 1000;
    }

    float convertirMetrosAKilometros(float m) {
        return m / 1000;
    }

    float convertirCelsiusAFahrenheit(float c) {
        return (c * 9 / 5) + 32;
    }

    float convertirFahrenheitACelsius(float f) {
        return (f - 32) * 5 / 9;
    }
};

int main() {
    Calculadora calc;
    Comparador comp;
    Conversor conv;

    int opcion;
    do {
        cout << "\nOpciones:\n";
        cout << "1. Calculadora\n";
        cout << "2. Comparador\n";
        cout << "3. Conversor\n";
        cout << "0. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int op;
                cout << "Selecciona la operacion (1: Sumar, 2: Restar, 3: Multiplicar, 4: Dividir): ";
                cin >> op;
                if (op == 1) {
                    int a, b;
                    cout << "Ingrese dos enteros: ";
                    cin >> a >> b;
                    cout << "Resultado: " << calc.sumar(a, b) << endl;
                } else if (op == 2) {
                    int a, b;
                    cout << "Ingrese dos enteros: ";
                    cin >> a >> b;
                    cout << "Resultado: " << calc.restar(a, b) << endl;
                } else if (op == 3) {
                    int a, b;
                    cout << "Ingrese dos enteros: ";
                    cin >> a >> b;
                    cout << "Resultado: " << calc.multiplicar(a, b) << endl;
                } else if (op == 4) {
                    int a, b;
                    cout << "Ingrese dos enteros: ";
                    cin >> a >> b;
                    cout << "Resultado: " << calc.dividir(a, b) << endl;
                }
                break;
            }
            case 2: {
                int a, b;
                cout << "Ingrese dos enteros a comparar: ";
                cin >> a >> b;
                cout << "Son iguales: " << (comp.comparar(a, b) ? "Si" : "No") << endl;
                break;
            }
            case 3: {
                float km, m, c, f;
                cout << "Ingrese kilometros a convertir a metros: ";
                cin >> km;
                cout << km << " km son " << conv.convertirKilometrosAMetros(km) << " metros." << endl;

                cout << "Ingrese metros a convertir a kilometros: ";
                cin >> m;
                cout << m << " metros son " << conv.convertirMetrosAKilometros(m) << " km." << endl;

                cout << "Ingrese grados Celsius a convertir a Fahrenheit: ";
                cin >> c;
                cout << c << "°C son " << conv.convertirCelsiusAFahrenheit(c) << "°F." << endl;

                cout << "Ingrese grados Fahrenheit a convertir a Celsius: ";
                cin >> f;
                cout << f << "°F son " << conv.convertirFahrenheitACelsius(f) << "°C." << endl;

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

