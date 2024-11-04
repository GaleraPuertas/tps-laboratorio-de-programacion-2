#include <iostream>
using namespace std;

class Punto {
    int x, y;
public:
    Punto() : x(0), y(0) {}
    Punto(int xVal, int yVal) : x(xVal), y(yVal) {}

    void imprimir() {
        cout << "Punto: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Punto p1;
    p1.imprimir();

    Punto p2(10, 20);
    p2.imprimir();

    return 0;
}

