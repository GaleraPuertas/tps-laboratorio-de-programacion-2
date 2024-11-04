#include <iostream>
using namespace std;

class CNumeros {
private:
    int n1, n2, n3;

public:

    CNumeros(int num1, int num2, int num3) {
        n1 = num1;
        n2 = num2;
        n3 = num3;
    }

  
    int calcularMaximo() {
        int maximo = n1;
        if (n2 > maximo) {
            maximo = n2;
        }
        if (n3 > maximo) {
            maximo = n3;
        }
        return maximo;
    }

    
    int calcularMinimo() {
        int minimo = n1;
        if (n2 < minimo) {
            minimo = n2;
        }
        if (n3 < minimo) {
            minimo = n3;
        }
        return minimo;
    }
};

int main() {
    int num1, num2, num3;

    cout << "Ingrese el primer n�mero: ";
    cin >> num1;
    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;
    cout << "Ingrese el tercer n�mero: ";
    cin >> num3;

    CNumeros numeros(num1, num2, num3);

    int maximo = numeros.calcularMaximo();
    int minimo = numeros.calcularMinimo();

    cout << "El m�ximo de los tres n�meros es: " << maximo << endl;
    cout << "El m�nimo de los tres n�meros es: " << minimo << endl;

    return 0;
}

